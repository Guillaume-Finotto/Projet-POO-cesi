#include "MyForm.h"
#include "Article.h"#inc
#include "Personel.h"
using namespace System; 
using namespace System::Windows::Forms;


int main()
{
    
    AccesBDD* basePrincipale = &AccesBDD();
    vector<string> a = { "Michel","David","chef","nulaprt","15-08-2020"};
    basePrincipale->ajouterDansBDD(Table::Personnel, a);
    std::cout << basePrincipale->effectuerRequeteSQL("SELECT * FROM personnel").size();


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Remplacez MyForm par le nom réel de votre formulaire
    ProjetPOO::MyForm^ mainForm = gcnew ProjetPOO::MyForm();
    Application::Run(mainForm);

    return 0;
}

