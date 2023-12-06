#include "MyForm.h"
#include "Article.h"#inc
#include "Personel.h"
using namespace System; 
using namespace System::Windows::Forms;


int main()
{
    
    AccesBDD* basePrincipale = &AccesBDD();
;


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Remplacez MyForm par le nom réel de votre formulaire
    ProjetPOO::MyForm^ mainForm = gcnew ProjetPOO::MyForm();
    Application::Run(mainForm);

    return 0;
}

