#pragma once
#include "AccesBDD.h"
#include "Article.h"
class Stats
{
public:
	Stat();
	Stat(AccesBDD* Bdd);

	float obtenirPanierMoyen();
	int obtenirCA(string mois, string annee);
	// J'affiche jusqu'au premier NULL
	Article** obtenirProduitsSousSeuil();
	Article** obtenirTop10();
	Article** obtenirFlop10();
	float obtenirPrixStock();
	float obtenirCoutStock();

private :
	AccesBDD* acceeBDD;


};

