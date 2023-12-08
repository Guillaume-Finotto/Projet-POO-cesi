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


ref class CL_Commande :
     Manager
{

public:
   
    CL_Commande(AccesBDD* bdd) : Manager(bdd){};
    void ajouter(List<String^>^ data, List < List<String^>^>^ sousCommande);// une sous commande c Id article -- IdCommande -- -- Quantite -- Prix_reduction

private:
    String^ TypeEtTable = "Commande";
     List<sousCommande^> contient;
};

