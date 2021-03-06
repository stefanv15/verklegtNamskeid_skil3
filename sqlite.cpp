#include "person.h"
#include "computers.h"
#include "sqlite.h"

//Sjálfgefni smiðurinn fyrir SQLite klasann.
SQLite::SQLite()
{
    openDatabase();
}

//Sækir gögn úr gagnagrunni og geymir í vektor.
void SQLite::openDatabase()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "scientists.sqlite";
    m_db.setDatabaseName(dbName);

    m_db.open();
}

//Nær í nýjust  gögn úr gagnagrunni persóna og skilar í vektor.
vector<Person> SQLite::addPersonQueryToList(QSqlQuery &query)
{
    vector<Person> list;

    while(query.next())
    {
        int id = query.value("id").toUInt();
        string name = query.value("name").toString().toStdString();
        string gender = query.value("gender").toString().toStdString();
        int dob = query.value("yearOfBirth").toUInt();
        int dod  = query.value("yearOfDeath").toUInt();

        Person newguy(id, name, gender, dob, dod);
        list.push_back(newguy);
    }
    return list;
}

//Nær í nýjustu gögn úr gagnagrunni tölva og skilar í vektor.
vector<Computers> SQLite::addComputerQueryToList(QSqlQuery &query)
{
    vector<Computers> list;

    while(query.next())
    {
        int id = query.value("id").toUInt();
        string nameOfCpu = query.value("nameOfCpu").toString().toStdString();
        int yearBuilt = query.value("yearBuilt").toUInt();
        string typeOfCpu = query.value("typeOfCpu").toString().toStdString();
        string wasBuilt = query.value("wasBuilt").toString().toStdString();

        Computers newCpu(id, nameOfCpu, yearBuilt, typeOfCpu, wasBuilt);
        list.push_back(newCpu);
    }
    return list;
}

//Sækir lista af persónum.
vector<Person> SQLite::getPersonList()
{
    QSqlQuery query(m_db);

    const QString sSQL = "SELECT * FROM person";
    query.exec(sSQL);

    return addPersonQueryToList(query);
}

//Sækir lista af tölvum.
vector<Computers> SQLite::getComputerList()
{
    QSqlQuery query(m_db);

    const QString sSQL = "SELECT * FROM computers";
    query.exec(sSQL);

    return addComputerQueryToList(query);
}

//Lokar á tengsl við gagnagrunn.
void SQLite::saveData()
{
    m_db.close();
}

//Bætir persónu við gagnagrunninn.
string SQLite::addData(Person& p)
{
    string retVal = "";
    QString sInsertSQL = "INSERT INTO person(name, gender, yearOfBirth, yearOfDeath) "
                         "VALUES (:name,:gender,:yearOfBirth,:yearOfDeath)";
    QSqlQuery query(m_db);
    query.prepare(sInsertSQL);
    query.bindValue(":name",QString::fromStdString(p.getName()));
    query.bindValue(":gender",QString::fromStdString(p.getGender()));
    query.bindValue(":yearOfBirth",p.getDayOfBirth());
    query.bindValue(":yearOfDeath",p.getDayOfDeath());
    if(!query.exec())
        retVal = query.lastError().text().toStdString();
    return retVal;
}

//Breytir persónu í gagnagrunninum.
string SQLite::updateData(Person &p)
{
    string retVal = "";
    QString sInsertSQL = "UPDATE person "
                         "SET name = :name, gender = :gender, yearOfBirth = :yearOfBirth, yearOfDeath = :yearOfDeath "
                         "WHERE id=:id";
    QSqlQuery query(m_db);
    query.prepare(sInsertSQL);
    query.bindValue(":name",QString::fromStdString(p.getName()));
    query.bindValue(":gender",QString::fromStdString(p.getGender()));
    query.bindValue(":yearOfBirth",p.getDayOfBirth());
    query.bindValue(":yearOfDeath",p.getDayOfDeath());
    query.bindValue(":id",p.getId());
    if (!query.exec())
        retVal = query.lastError().text().toStdString();
    return retVal;
}

//Bætir tölvu við gagnagrunn.
string SQLite::addComputer(Computers& c)
{
    string retVal = "";
    QString sInsertSQL = "INSERT INTO computers(nameOfCpu, yearBuilt, typeOfCpu, wasBuilt) "
                         "VALUES (:nameOfCpu,:yearBuilt,:typeOfCpu,:wasBuilt)";
    QSqlQuery query(m_db);
    query.prepare(sInsertSQL);
    query.bindValue(":nameOfCpu",QString::fromStdString(c.getNameOfCpu()));
    if(c.getYearBuilt()>0)
        query.bindValue(":yearBuilt",QString::number(c.getYearBuilt()));
    else
        query.bindValue(":yearBuilt",QVariant(QVariant::Int)); // Null value
    query.bindValue(":typeOfCpu",QString::fromStdString(c.getTypeOfCpu()));
    query.bindValue(":wasBuilt",QString::fromStdString(c.getWasBuilt()));
    if (!query.exec())
        retVal = query.lastError().text().toStdString();
    return retVal;
}

//Breytir tölvu í gagnagrunninum.
string SQLite::updateComputer(Computers &c)
{
    string retVal = "";
    QString sInsertSQL = "UPDATE computers "
                         "SET nameOfCpu = :nameOfCpu, yearBuilt = :yearBuilt, typeOfCpu = :typeOfCpu, "
                         "wasBuilt = :wasBuilt WHERE id=:id";
    QSqlQuery query(m_db);
    query.prepare(sInsertSQL);
    query.bindValue(":nameOfCpu",QString::fromStdString(c.getNameOfCpu()));
    if(c.getYearBuilt()>0)
        query.bindValue(":yearBuilt",QString::number(c.getYearBuilt()));
    else
        query.bindValue(":yearBuilt",QVariant(QVariant::Int)); // Null value
    query.bindValue(":typeOfCpu",QString::fromStdString(c.getTypeOfCpu()));
    query.bindValue(":wasBuilt",QString::fromStdString(c.getWasBuilt()));
    query.bindValue(":id",QString::number(c.getId()));
    if (!query.exec())
        retVal = query.lastError().text().toStdString();
    return retVal;
}

//Venslar persónu og tölvu saman.
void SQLite::addRelation(int computerID, int personID)
{

    QString sInsertSQL = QString("INSERT INTO comp_pers(compID, persID)"
                                 "VALUES (:computerID, :personID)");
    QSqlQuery query(m_db);
    query.prepare(sInsertSQL);
    query.bindValue(":computerID",computerID);
    query.bindValue(":personID",personID);
    query.exec();
}

//Sækir lista af venslafærslum fyrir tölvur.
vector<Comp_pers> SQLite::getLinkedComputers(int pID)
{
    QSqlQuery query(m_db);

    const QString sSQL = "SELECT * FROM comp_pers WHERE persID = "+QString::number(pID);
    query.exec(sSQL);

    vector<Comp_pers> cpList;
    while(query.next())
    {
        int cid = query.value("compID").toUInt();
        int pid = query.value("persID").toUInt();

        Comp_pers newCP(cid, pid);
        cpList.push_back(newCP);
    }
    return cpList;
}

//Sækir lista af venslafærslum fyrir persónur.
vector<Comp_pers> SQLite::getLinkedPerson(int cID)
{
    QSqlQuery query(m_db);

    const QString sSQL = "SELECT * FROM comp_pers WHERE compID =  "+QString::number(cID);
    query.exec(sSQL);

    vector<Comp_pers> persList;
    while(query.next())
    {
        int cid = query.value("compID").toUInt();
        int pid = query.value("persID").toUInt();

        Comp_pers newPers(cid, pid);
        persList.push_back(newPers);
    }
    return persList;
}

//Leitar af persónum í gagnagrunni.
vector<Person> SQLite::searchPersons(string search)
{
    QSqlQuery query(m_db);

    QString sSQL = "SELECT * FROM person WHERE name LIKE :search";
    query.prepare(sSQL);
    search = "%%"+search+"%%";
    query.bindValue(":search", QString::fromStdString(search));
    query.exec();

    return addPersonQueryToList(query);
}

//Leitar af tölvum í gagnagrunni.
vector<Computers> SQLite::searchComputers(string search)
{
    QSqlQuery query(m_db);

    QString sSQL = "SELECT * FROM computers WHERE nameOfCpu LIKE :search";
    query.prepare(sSQL);
    search = "%%"+search+"%%";
    query.bindValue(":search", QString::fromStdString(search));
    query.exec();

    return addComputerQueryToList(query);
}

//Eyðir tengslum viðkomandi persónu og tölvum.
void SQLite::removeScientistRelation(int input)
{
    QSqlQuery query(m_db);
    QString delSQL = "DELETE FROM comp_pers WHERE persID = "+QString::number(input);
    query.exec(delSQL);
}

//Eyðir tengslum viðkomandi tölvu og persónum.
void SQLite::removeComputerRelation(int input)
{
    QSqlQuery query(m_db);
    QString delSQL = "DELETE FROM comp_pers WHERE compID = "+QString::number(input);
    query.exec(delSQL);
}

//Fjarlægir persónu endanlega úr gagnagrunninum.
void SQLite::removeScientist(int input)
{
    removeScientistRelation(input);
    QSqlQuery query(m_db);
    QString delSQL = "DELETE FROM person WHERE id = "+QString::number(input);
    query.exec(delSQL);
}

//Fjarlægir tölvu endanlega úr gagnagrunninum.
void SQLite::removeComputer(int input)
{
    removeComputerRelation(input);
    QSqlQuery query(m_db);
    QString delSQL = "DELETE FROM computers WHERE id = "+QString::number(input);
    query.exec(delSQL);
}
