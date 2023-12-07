#include "Manager.h"

#include <iostream>


Manager::Manager(AccesBDD * Acces_BDD, unsigned int id)
{
    if (Acces_BDD == nullptr)
    {
        std::cout << "Base De Donner Non crée";
        
    }

    BDD = Acces_BDD;
    Manager::id = id;
    Manager::valeurs = {"Identifiant", "autre valeur"};
    
}



void Manager::setattribut(collone col, std::string valeur)
{ 
    valeurs[col] = valeur;

}

std::string Manager::getAttribut(collone col)
{

    return valeurs[col];
}

