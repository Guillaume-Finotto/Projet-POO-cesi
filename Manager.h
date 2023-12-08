#pragma once
#include "AccesBDD.h"
#include <string>
#include <vector>


enum collone;


 ref class  Manager
{
public:
	
	Manager(AccesBDD* Acces_BDD);
	Manager(AccesBDD *Acces_BDD, unsigned int id);
	



    void ajouter(vector<string> data);
	void detruire(unsigned int ID);
    void setattribut(collone col, String^ valeur);



    String^ getAttribut(collone col);

	List<String^>^ getAllAttribut();


protected:
	
	AccesBDD * BDD;
	unsigned int id;
	Table type;

	string* col;
	
	List<String^>^ attributs;
};

