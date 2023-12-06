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


    void ajouterDansBDD(Table table, vector<string> valeurs);


    vector<string> effectuerRequeteSQL(string requete);

private:
    string getref(Table a);
    string Tableref[5] = { "personnel","Client" ,"Commande","Article","Sous_Commande" };

    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt;
};
