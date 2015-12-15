#ifndef SQLITE_H
#define SQLITE_H
#include <QtSql>
#include "person.h"
#include "computers.h"
#include "comp_pers.h"

class SQLite
{
public:
    SQLite();                                                   //Sjálfgefni smiðurinn fyrir SQLite klasann.
    void saveData();                                            //Lokar á tengsl við gagnagrunn.
    string addData(Person& p);                                  //Bætir persónu við gagnagrunn.
    string updateData(Person& p);                               //Breytir persónu í gagnagrunni.
    string addComputer(Computers& c);                           //Bætir tölvu við gagnagrunn.
    string updateComputer(Computers& c);                        //Breytir tölvu í gagnagrunni.
    void addRelation(int computerID, int personID);             //Venslar persónu og tölvu saman.
    vector<Comp_pers> getLinkedComputers(int pID);              //Sækir lista af venslafærslum fyrir persónur.
    vector<Comp_pers> getLinkedPerson(int cID);                 //Sækir lista af venslafærslum fyrir tölvur.
    vector<Person> getPersonList();                             //Sækir lista af persónum.
    vector<Computers> getComputerList();                        //Sækir lista af tölvum.
    void removeScientist(int input);                            //Eyðir persónu úr gagnagrunninum.
    void removeComputer(int input);                             //Eyðir tölvu úr gagnagrunnninum.
    void removeScientistRelation(int input);                    //Eyðir tengslum viðkomandi persónu og tölvum.
    void removeComputerRelation(int input);                     //Eyðir tengslum viðkomandi tölvu og persónum.
    void editScientist(int input, Person& pers);                //Yfirskrifar persónu í gagnagrunninum.
    void editComputer(int input, Computers& comp);              //Yfirskrifar tölvu í gagnagrunninum.
    vector<Person> searchPersons(string search);                //Leitar af persónum í gagnagrunninum.
    vector<Computers> searchComputers(string search);           //Leitar af tölvum í gagnagrunninum.

private:                                                        //Prívat breytur.
    QSqlDatabase m_db;
    void openDatabase();                                        //Opnar tengingu við gagnagrunn.
    vector<Person> addPersonQueryToList(QSqlQuery &query);      //Nær í nýjustu gögn úr gagnagrunni persóna og skilar i vektor.
    vector<Computers> addComputerQueryToList(QSqlQuery &query); //Nær í nýjustu gögn úr gagnagrunni tölva og skilar í vektor.
};

#endif
