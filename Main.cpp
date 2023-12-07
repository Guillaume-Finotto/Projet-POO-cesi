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
{
    
    AccesBDD* basePrincipale = &AccesBDD();
    vector<string> a = { "Michel","David","chef","nulaprt",""};
    basePrincipale->ajouterDansBDD(Table::Personnel, a);
    basePrincipale->effectuerRequeteSQL("SELECT * FROM personnel");
    basePrincipale->effectuerRequeteSQL("SELECT * FROM personnel");

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
