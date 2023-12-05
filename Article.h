#pragma once
#include "Manager.h"
class Article :
    public Manager
{

public:
    enum collone {
        ID,
        Nom,
        Nature,
        Couleur,
        PrixHT,
        PrixTTC,
        Qte_stocker,
        seuil_reappro,
        taux_TVA,
        Prix_variable,
        Prix_fournisseur,
        en_vente
    };


};

