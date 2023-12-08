#include "Manager.h"

#include <iostream>


Manager::Manager(AccesBDD* Acces_BDD)
{
    BDD = Acces_BDD;
    id = 0;

}
Manager::Manager(AccesBDD * Acces_BDD, unsigned int id)
{
    if (Acces_BDD == nullptr)
    {
        std::cout << "Base De Donner Non crée";
        
    }
    attributs = BDD->effectuerRequeteSQL("SELECT * FROM" + BDD->getref(Manager::type) + "WHERE id = " + std::to_string(id))[0];


    
}


void Manager::ajouter(List<String^>^ data )
{
    Manager::attributs->AddRange(Array())
    BDD->ajouterDansBDD(Manager::type, data);
    

}

void Manager::detruire(unsigned int ID)
{
    BDD->suprimerDansBDD(Manager::type, ID);


}



void Manager::setattribut(collone col, String^ valeur)
{ 
    attributs[col] = valeur;

}

String^ Manager::getAttribut(collone col)
{

    return attributs[col];
}

List<String^>^ Manager::getAllAttribut()
{
   
    return attributs;
}

