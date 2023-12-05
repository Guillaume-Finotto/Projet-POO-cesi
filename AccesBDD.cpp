// AccesBDD.cpp
#include "AccesBDD.h"
#include <iostream>
#include "SQLiteCpp/SQLiteCpp.h"

AccesBDD::AccesBDD() : db(nullptr) {}

AccesBDD::~AccesBDD() {
    disconnect();
}

bool AccesBDD::connect() {
    try {
        db = new SQLite::Database("C:\Users\Joris\AppData\Local\Microsoft\Microsoft SQL Server Local DB\Instances\MSSQLLocalDB");
        return true;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur de connexion à la base de données : " << e.what() << std::endl;
        return false;
    }
}

void AccesBDD::disconnect() {
    if (db) {
        delete db;
        db = nullptr;
    }
}

void AccesBDD::afficherTablePersonnel() {
    if (!db) {
        std::cerr << "La base de données n'est pas connectée." << std::endl;
        return;
    }

    try {
        SQLite::Statement query(*db, "SELECT * FROM personnel");
        while (query.executeStep()) {
            int id_personnel = query.getColumn(0);
            std::string nom = query.getColumn(1);
            std::string prenom = query.getColumn(2);
            // Ajoutez ici d'autres colonnes selon votre table

            std::cout << "ID: " << id_personnel << ", Nom: " << nom << ", Prenom: " << prenom << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur lors de la récupération des données : " << e.what() << std::endl;
    }
}
