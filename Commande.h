#pragma once
#include "Manager.h"
#include "sousCommande.h"
/*
enum colloneCommande {
        ID,
        Date_livraison,
        Date_paiement,
        Date_emission,
        Reference,
        Remise,
        Date_creation_commande,
        ID_client,
        ID_Personnel
    };*/


ref class Commande :
     Manager
{

public:
   
    Commande(AccesBDD* bdd) : Manager(bdd){};

private:
    String^ TypeEtTable = "Commande";
     List<sousCommande^> contient;
};

