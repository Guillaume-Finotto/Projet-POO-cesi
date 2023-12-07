//AccesBDD.h
#pragma once
#include <windows.h>
#include <iostream>
#include <map>
#include <sql.h>
#include <sqlext.h>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include "stdlib.h"
#include <vcclr.h>
#include <map>
#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000
//include the below additional libraries

#include <sqltypes.h>

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_Composants
{

}
using namespace std;

enum Table
{
    Personnel ,
    Client ,
    Commande ,
    Article ,
    Sous_Commande
};

class AccesBDD {
    
public:
    AccesBDD();
    ~AccesBDD();

    void suprimerDansBDD(Table table, unsigned int ID);
    void suprimerDansBDD(Table table, string ID);
    void conextion();
    void deconextion();

    void ajouterDansBDD(Table table, vector<string> valeurs); 
    
    Collections::Generic::List<String^>^ effectuerRequeteSQL(string requete);
    string getref(Table a);

private:


    //define handles and variables
    SQLHANDLE sqlConnHandle;
    SQLHANDLE sqlStmtHandle;
    SQLHANDLE sqlEnvHandle;
    SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];

    const   char*  const AccesBDD::Tableref[5] = {"personnel","client" ,"commande","article","sous_Commande" };
};
