#pragma once
#include "Manager.h"
class Commande :
    public Manager
{

public:
    enum collone {
        ID,
        Date_livraison,
        Date_paiement,
        Date_emission,
        Reference,
        Remise,
        Date_creation_commande,
        ID_client,
        ID_Personnel
    };


private:
    std::string static TypeEtTable = "Commande";
};

