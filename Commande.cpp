#include "Commande.h"
using namespace msclr::interop;
void CL_Commande::ajouter(List<String^>^ data, List < List<String^>^>^ sousCommande)//ID articleID  Commande quantite "prix"
{//Date livraison pai emision moypaiment 


	String^ idCommandeMax = BDD->effectuerRequeteSQL("SELECT MAX(ID_Commande) + 1 AS Max_ID_Commande FROM Commande; ")[0][0];
	//CREATION DE TOUTE LES SOUS COMMANDES :
	//ID articleID  Commande quantite "prix"
	List < String^ > ^ buffer = gcnew List < String^ >;
	for each (List<String^>^ list in sousCommande)
	{
		buffer->Add(list[0]);
		buffer->Add(idCommandeMax);
		buffer->Add(list[1]);
		buffer->Add(BDD->effectuerRequeteSQL("SELECT prixTTC * " + marshal_as<std::string>(list[2]) + " FROM Article Where ID_Article="+ marshal_as<std::string>(list[0]))[0][0]);
		BDD->ajouterDansBDD(Table::Sous_Commande, buffer);

	}

	data->Add(BDD->effectuerRequeteSQL("SELECT GETDATE() AS DateActuelle;")[0][0]);
	
	String^ remise = BDD->effectuerRequeteSQL(" SELECT  COALESCE(CASE WHEN MONTH(GETDATE()) = MONTH(Client.Date_de_naissance) AND DAY(GETDATE()) = DAY(Client.Date_de_naissance) THEN 0.1 ELSE 0 END, 0) + COALESCE(CASE WHEN DATEDIFF(DAY, Client.Premier_achat, GETDATE()) = 0 THEN 0.05 ELSE 0 END, ) AS Remise_obtenue FROM Client WHERE ID_Client = " + marshal_as<std::string>(data[4]) + ";")[0][0];
	data->Add(BDD->effectuerRequeteSQL("SELECT SUM(Prix_reduction) * (1 - "+ marshal_as<std::string>(remise) + ") AS Somme_Prix_Reduction FROM Possede WHERE ID_Commande = " + marshal_as<std::string>(idCommandeMax) + ";")[0][0]);

	
	
	data->Add(remise);
	BDD->ajouterDansBDD(Table::Commande, data);

	
}
