#pragma once
#include "Manager.h"
using namespace std;
enum class colloneClient {
    ID,
    Nom,
    Prenom,
    Adresse_facturation,
    Adresse_livraison,
    Date_de_naissance,
    Premier_achat,
    client_inscrit
};
ref class Client : Manager
{

	Client(AccesBDD* bdd,unsigned int id);
    
private:
    String^  TypeEtTable = "Article";
};
