//AccesBDD.h
#pragma once
#include <windows.h>
#include <iostream>
#include <sql.h>
#include <sqlext.h>
#include <vector>

class AccesBDD {
public:
    AccesBDD();
    ~AccesBDD();

    bool connect();
    void disconnect();

    // Exemple de fonction pour r�cup�rer les donn�es de la table personnel
    void afficherTablePersonnel();
    std::vector<std::string> effectuerRequeteSQL(std::string requete);
private:
    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt;
};
