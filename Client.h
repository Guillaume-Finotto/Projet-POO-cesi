#pragma once
#include "Manager.h"
using namespace std;
enum class collone2 {
    ID,
    Nom,
    Prenom,
    Adresse_facturation,
    Adresse_livraison,
    Date_de_naissance,
    Premier_achat,
    client_inscrit
};
class Client : Manager
{

	Client(AccesBDD* bdd,unsigned int id);
    
private:
    std::string  TypeEtTable = "Article";
};
