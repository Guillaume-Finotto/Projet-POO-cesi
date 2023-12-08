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
    std::unique_ptr<Article[]> obtenirProduitsSousSeuil();
    std::unique_ptr<Article[]> obtenirTop10();
    std::unique_ptr<Article[]> obtenirFlop10();
    float obtenirPrixStock();
    float obtenirCoutStock();

private:
    std::unique_ptr<AccesBDD> acceeBDD;
};