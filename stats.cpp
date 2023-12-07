#include "Stats.h"

Stats::Stat()
{
	acceeBDD = &AccesBDD();

};
Stats::Stat(AccesBDD Bdd)
{
	acceeBDD = &AccesBDD();

};

float Stats::obtenirPanierMoyen()
{


}

int Stats::obtenirCA(string mois, string annee);
// J'affiche jusqu'au premier NULL
Article** Stats::obtenirProduitsSousSeuil();
Article** Stats::obtenirTop10();
Article** Stats::obtenirFlop10();
float Stats::obtenirPrixStock();
float Stats::obtenirCoutStock();
