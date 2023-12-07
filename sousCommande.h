#pragma once
#include "Manager.h"

ref class sousCommande : public Manager
{
public:
	sousCommande(AccesBDD* bdd) : Manager(bdd){};
};

