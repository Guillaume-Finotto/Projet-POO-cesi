#include "Personel.h"

void CL_Personel::ajouter(vector<string> data)
{

	unsigned int PlusgrandeID = BDD->effectuerRequeteSQL("")[0][0]->ToString();
	BDD->ajouterDansBDD(Table::Commande, );
}
