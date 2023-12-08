#pragma once
#include "Manager.h"
enum collone {
        ID,
        Nom,
        Prenom,
        Poste,
        Adresse,
        Date_embauche,
        ID_superieur
    };
ref class CL_Personel : Manager
{

public:
    CL_Personel(AccesBDD* bdd) : Manager(bdd) {};
   

private:

    static String^ TypeEtTable = "Personnel";

};

