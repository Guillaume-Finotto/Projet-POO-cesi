#pragma once
#include "AccesBDD.h"
#include "Article.h"
#include <memory>
#include <string>

class Stat
{
public:
    Stat();
    Stat(const AccesBDD& Bdd);

    float obtenirPanierMoyen();
    int obtenirCA(std::string mois, std::string annee);
    CL_Article obtenirProduitsSousSeuil();
    CL_Article obtenirTop10();
    CL_Article obtenirFlop10();
    float obtenirPrixStock();
    float obtenirCoutStock();

private:
    AccesBDD * acceeBDD;
};