#pragma once
#include "AccesBDD.h"
#include <string>
#include <vector>




class Manager
{
public:

	Manager(AccesBDD *Acces_BDD, unsigned int id=0);
	virtual enum collone{teste,echec};

	Manager* creeDepuisBDD(Table table, unsigned int ID);
	Manager* creeDepuisBDD(Table table, string ID);


    void ajouter();
	void detruire();
    void setattribut(collone col, std::string valeur);
	void afficher();
	

    std::string getAttribut(collone col);

	std::vector<std::string> getAllAttribut();


protected:
	
	AccesBDD * BDD;
	unsigned int id;
	Table Type;

	string* col;
	
	std::vector<std::string> valeurs;
};

