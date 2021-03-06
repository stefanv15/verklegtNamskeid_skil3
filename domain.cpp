#include "domain.h"
#include "person.h"
#include "computers.h"
#include "comp_pers.h"
#include <algorithm>

//Sjálfgefni smiðurinn fyrir domain klasann.
Domain::Domain()
{

}

//Býr til eintak af persónu.
string Domain::createPerson(Person p)
{
    return m_sqlite.addData(p);
}

//Býr til eintak af tölvu.
string Domain::createComputer(Computers c)
{
    return m_sqlite.addComputer(c);
}

//Breytir eintaki af persónu.
string Domain::updatePerson(Person p)
{
    return m_sqlite.updateData(p);
}

//Breytir eintaki af tölvu.
string Domain::updateComputer(Computers c)
{
    return m_sqlite.updateComputer(c);
}

//Sækir personlist úr sqlite og skilar honum.
vector<Person> Domain::getList()
{
    return m_sqlite.getPersonList();
}

//Sækir computerlist úr sqlite og skilar honum.
vector<Computers> Domain::getComputerList()
{
    return m_sqlite.getComputerList();
}

//Sækir lista af persónum fyrir e-a tölvu.
string Domain::getPersList(int pId)
{
    vector<Comp_pers> pList = m_sqlite.getLinkedPerson(pId);
    string sPersons = "";
    for(unsigned int i = 0; i < pList.size(); i++)
    {
        if (i>0)
            sPersons += ", ";
        Person pers = findPersonById(pList[i].getPersonID());
        sPersons += pers.getName();
    }
    return sPersons;
}

//Sækir lista af tölvum fyrir e-a persónu.
string Domain::getComputerList(int pId)
{
    vector<Comp_pers> cpList = m_sqlite.getLinkedComputers(pId);
    string sComputers = "";
    for(unsigned int i = 0; i < cpList.size(); i++)
    {
        if (i>0)
            sComputers += ", ";
        Computers comp = findComputerById(cpList[i].getComputerID());
        sComputers += comp.getNameOfCpu();
    }
    return sComputers;
}

//Nær í savedata fallið úr domain og skilar því.
void Domain::saveAllData()
{
    m_sqlite.saveData();
}

//Leitar af persónu í lista og skilar honum.
vector<Person> Domain::searchScientist(string search)
{
    return m_sqlite.searchPersons(search);
}

//Leitar af persónu í lista og skilar honum.
vector<Computers> Domain::searchComputer(string search)
{
    return m_sqlite.searchComputers(search);
}

//Finnur og skilar persónu út frá id.
Person Domain::findPersonById(int cID)
{
    vector<Person> list = m_sqlite.getPersonList();
    Person retPers;
    for(unsigned int i = 0; i < list.size(); i++)
    {
        if(list[i].getId()==cID)
        {
            retPers = list[i];
            break;
        }
    }
    return retPers;
}

//Finnur og skilar tölvu út frá id.
Computers Domain::findComputerById(int cID)
{
    vector<Computers> list = m_sqlite.getComputerList();
    Computers retComp;
    for(unsigned int i = 0; i < list.size(); i++)
    {
        if(list[i].getId()==cID)
        {
            retComp = list[i];
            break;
        }
    }
    return retComp;
}

//Leitar af persónu í lista eftir ID og fjarlægir hana endanlega úr gagnagrunninum.
void Domain::removeScientist(int input)
{
    m_sqlite.removeScientist(input);
}

//Leitar af tölvu í lista eftir ID og fjarlægir hana endanlega úr gagnagrunninum.
void Domain::removeComputer(int input)
{
    m_sqlite.removeComputer(input);
}

//Býr til tengingu milli persónu og tölvu.
void Domain::createRelation(int computerID, int personID)
{
    m_sqlite.addRelation(computerID, personID);
}
