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
ref class CL_Client : Manager
{

    CL_Client(AccesBDD* bdd,unsigned int id);
    
private:
    String^  TypeEtTable = "Article";
};
