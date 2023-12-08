#include "MyForm.h"
#include "Article.h"
#include "Personel.h"
#include "Interface.h"
using namespace System; 
using namespace System::Windows::Forms;
using namespace std;

//include the below additional libraries
#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

int main()
{/*
    
    List<String^>^ Client = gcnew List<String^>;
    Client->AddRange(gcnew array<String^,8> { "ID", "Nom", "Prenom", "Adresse_facturation", "Adresse_livraison", "Date_de_naissance", "Premier_achat", "client_inscrit" };
    )
    { "ID", "Nom", "Prenom", "Adresse_facturation", "Adresse_livraison", "Date_de_naissance", "Premier_achat", "client_inscrit" });

    Array < String^> Commande = { "ID","Date_livraison","Date_paiement","Date_emission","Reference""Remise""Date_creation_commande","ID_client","ID_Personnel" };

*/

    AccesBDD* basePrincipale = &AccesBDD();


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    
    // Remplacez MyForm par le nom réel de votre formulaire
    ProjetPOO::MyForm^ mainForm = gcnew ProjetPOO::MyForm();
    Application::Run(mainForm);

    // Créez une instance de AccesBDD
    AccesBDD* monBDD = new AccesBDD(/* paramètres de construction éventuels */);

    // Créez une instance de Table (assurez-vous de définir correctement votre constructeur)
    Table maTable = Table(/* paramètres de construction éventuels */);


    return 0;
}
