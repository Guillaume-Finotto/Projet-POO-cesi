#include "MyForm.h"
#include "Article.h"
#include "Personel.h"
using namespace System; 
using namespace System::Windows::Forms;
using namespace std;


int main()
{
    
    AccesBDD* basePrincipale = &AccesBDD();
    vector<string> a = { "Michel","David","chef","nulaprt",""};
    basePrincipale->ajouterDansBDD(Table::Personnel, a);
    basePrincipale->effectuerRequeteSQL("SELECT * FROM personnel");


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    // Remplacez MyForm par le nom réel de votre formulaire
    ProjetPOO::MyForm^ mainForm = gcnew ProjetPOO::MyForm();
    Application::Run(mainForm);

    return 0;
}
