#pragma once
#include "Manager.h"
class Personel : Manager
{
public:

    enum collone {
        ID,
        Nom,
        Prenom,
        Poste,
        Adresse,
        Date_embauche,
        ID_superieur
    };
private:
    std::string static TypeEtTable = "Personnel";
};

