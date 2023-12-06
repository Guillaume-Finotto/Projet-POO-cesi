//AccesBDD.h
#pragma once
#include <windows.h>
#include <iostream>
#include <sql.h>
#include <sqlext.h>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include "stdlib.h"
#include <vcclr.h>


using namespace std;

enum Table
{
    Personnel = "Personel",
    Client ="client",
    Commande = "commande",
    Article = "article",
    Sous_Commande = "sous_commande"

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
    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt;
};
