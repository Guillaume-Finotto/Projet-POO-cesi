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
ref class Personel : Manager
{
public:
    Personel(AccesBDD* bdd) : Manager(bdd) {};
private:

    static String^ TypeEtTable = "Personnel";

};

