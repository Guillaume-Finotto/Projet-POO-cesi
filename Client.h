#pragma once
#include "Manager.h"
class Client :
    public Manager
{

public:
    Client() : Manager();
    enum collone {
        ID,
        Nom,
        Prenom,
        Adresse_facturation,
        Adresse_livraison,
        Date_de_naissance,
        Premier_achat,
        client_inscrit
    };

private:
    std::string static TypeEtTable = "Article";
};

