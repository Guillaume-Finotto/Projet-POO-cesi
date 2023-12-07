#pragma once
#include "Manager.h"
#include "Personel.h"

/*enum colloneArticle {
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
    };*/
ref class  Article :
    public Manager
{


public:
    Article(AccesBDD* poo) : Manager(poo){};
private:

    Table Type = Table::Article;
    /*
    vector<string> collone ={
        "ID",
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
     }*/
};

