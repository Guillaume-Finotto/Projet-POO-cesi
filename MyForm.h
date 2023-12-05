#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Application;
	private: System::Windows::Forms::TabPage^ Accueil;
	private: System::Windows::Forms::TabPage^ clients;
	private: System::Windows::Forms::TabPage^ Personnels;
	private: System::Windows::Forms::TabPage^ stock;
	private: System::Windows::Forms::TabPage^ commandes;
	private: System::Windows::Forms::TabPage^ statistiques;
	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->Application = (gcnew System::Windows::Forms::TabControl());
			   this->Accueil = (gcnew System::Windows::Forms::TabPage());
			   this->clients = (gcnew System::Windows::Forms::TabPage());
			   this->Personnels = (gcnew System::Windows::Forms::TabPage());
			   this->stock = (gcnew System::Windows::Forms::TabPage());
			   this->commandes = (gcnew System::Windows::Forms::TabPage());
			   this->statistiques = (gcnew System::Windows::Forms::TabPage());
			   this->Application->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // Application
			   // 
			   this->Application->Controls->Add(this->Accueil);
			   this->Application->Controls->Add(this->clients);
			   this->Application->Controls->Add(this->Personnels);
			   this->Application->Controls->Add(this->stock);
			   this->Application->Controls->Add(this->commandes);
			   this->Application->Controls->Add(this->statistiques);
			   this->Application->ItemSize = System::Drawing::Size(150, 70);
			   this->Application->Location = System::Drawing::Point(-3, -1);
			   this->Application->Name = L"Application";
			   this->Application->SelectedIndex = 0;
			   this->Application->Size = System::Drawing::Size(908, 596);
			   this->Application->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			   this->Application->TabIndex = 0;
			   // 
			   // Accueil
			   // 
			   this->Accueil->BackColor = System::Drawing::Color::Gainsboro;
			   this->Accueil->Location = System::Drawing::Point(4, 74);
			   this->Accueil->Name = L"Accueil";
			   this->Accueil->Padding = System::Windows::Forms::Padding(3);
			   this->Accueil->Size = System::Drawing::Size(900, 518);
			   this->Accueil->TabIndex = 0;
			   // 
			   // clients
			   // 
			   this->clients->BackColor = System::Drawing::Color::Red;
			   this->clients->Location = System::Drawing::Point(4, 74);
			   this->clients->Name = L"clients";
			   this->clients->Padding = System::Windows::Forms::Padding(3);
			   this->clients->Size = System::Drawing::Size(902, 520);
			   this->clients->TabIndex = 1;
			   this->clients->Text = L"Clients";
			   // 
			   // Personnels
			   // 
			   this->Personnels->BackColor = System::Drawing::Color::Orange;
			   this->Personnels->Location = System::Drawing::Point(4, 74);
			   this->Personnels->Name = L"Personnels";
			   this->Personnels->Padding = System::Windows::Forms::Padding(3);
			   this->Personnels->Size = System::Drawing::Size(902, 520);
			   this->Personnels->TabIndex = 2;
			   this->Personnels->Text = L"Personnels";
			   // 
			   // stock
			   // 
			   this->stock->BackColor = System::Drawing::Color::Cyan;
			   this->stock->Location = System::Drawing::Point(4, 74);
			   this->stock->Name = L"stock";
			   this->stock->Padding = System::Windows::Forms::Padding(3);
			   this->stock->Size = System::Drawing::Size(902, 520);
			   this->stock->TabIndex = 3;
			   this->stock->Text = L"Stock";
			   // 
			   // commandes
			   // 
			   this->commandes->BackColor = System::Drawing::Color::Blue;
			   this->commandes->Location = System::Drawing::Point(4, 74);
			   this->commandes->Name = L"commandes";
			   this->commandes->Padding = System::Windows::Forms::Padding(3);
			   this->commandes->Size = System::Drawing::Size(902, 520);
			   this->commandes->TabIndex = 4;
			   this->commandes->Text = L"Commandes";
			   // 
			   // statistiques
			   // 
			   this->statistiques->BackColor = System::Drawing::Color::Fuchsia;
			   this->statistiques->Location = System::Drawing::Point(4, 74);
			   this->statistiques->Name = L"statistiques";
			   this->statistiques->Padding = System::Windows::Forms::Padding(3);
			   this->statistiques->Size = System::Drawing::Size(902, 520);
			   this->statistiques->TabIndex = 5;
			   this->statistiques->Text = L"Statistiques";
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(905, 598);
			   this->Controls->Add(this->Application);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Application->ResumeLayout(false);
			   this->ResumeLayout(false);
		   }
#pragma endregion
	};
}
