//AccesBDD.h
#pragma once


class AccesBDD {
public:
    AccesBDD();
    ~AccesBDD();

    bool connect();
    void disconnect();

    // Exemple de fonction pour r�cup�rer les donn�es de la table personnel
    void afficherTablePersonnel();

private:
    SQLite::Database* db;
};
