// AccesBDD.h
#pragma once

#include <SQLiteCpp/SQLiteCpp.h>

class AccesBDD {
public:
    AccesBDD();
    ~AccesBDD();

    bool connect();
    void disconnect();

    // Exemple de fonction pour récupérer les données de la table personnel
    void afficherTablePersonnel();

private:
    SQLite::Database* db;
};
