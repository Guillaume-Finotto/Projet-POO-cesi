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
    SQLHSTMT conextion();
    void deconextion();

    void ajouterDansBDD(Table table, vector<string> valeurs); 

    vector<string> effectuerRequeteSQL(string requete);
    string getref(Table a);

private:
    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt;

    

    const   char*  const AccesBDD::Tableref[5] = {"personnel","client" ,"commande","article","sous_Commande" };
};
