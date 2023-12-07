#pragma once
#include "AccesBDD.h"
#include <string>
#include <vector>


enum collone;
Array < String^> coloneArticle = {  "ID","Nom","Nature","Couleur","PrixHT","PrixTTC","Qte_stocker","seuil_reappro","taux_TVA","Prix_variable","Prix_fournisseur","en_vente" };

Array < String^> colonePersonnel = {"ID","Nom","Prenom","Poste","Adresse""Date_embauche","ID_superieur" };

Array < String^>coloneClient = { "ID","Nom","Prenom","Adresse_facturation","Adresse_livraison","Date_de_naissance","Premier_achat","client_inscrit" };

Array < String^> coloneCommande = { "ID","Date_livraison","Date_paiement","Date_emission","Reference""Remise""Date_creation_commande","ID_client","ID_Personnel" };


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

