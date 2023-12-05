#pragma once
#include "AccesBDD.h"
#include <string>
class Manager : AccesBDD
{
public:
	Manager(unsigned int id=0);
	static virtual enum collone;
	
    void ajouter();
	void detruire();
    void setattribut(collone col, std::string valeur);
	void afficher();
    std::string getAttribut(collone col);

protected:
	unsigned int id;
	
};

