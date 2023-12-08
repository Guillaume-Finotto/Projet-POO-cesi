#pragma once
#include "Statistique.h"
#include "Interface.h"
#include <msclr/marshal_cppstd.h>


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Accueil
	/// </summary>
	public ref class Accueil : public System::Windows::Forms::Form
	{
	public:
		Accueil(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Accueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Accueil::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(337, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Déconnecter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Accueil::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(209, 235);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CLient";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Accueil::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(421, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 59);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Accueil::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(112, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 59);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Stock";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Accueil::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(314, 156);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(181, 59);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Commande";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Accueil::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(517, 156);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(181, 59);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Statistique";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Accueil::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Que souhaitez vous consulter \? ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(565, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(179, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(818, 423);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Accueil";
			this->Text = L"Accueil";
			this->Load += gcnew System::EventHandler(this, &Accueil::Accueil_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Deconnecter();
	}
	public:
		// Ajoutez cette fonction pour déconnecter et revenir à l'interface de connexion
		void Deconnecter()
		{
			this->Close(); // Fermer l'interface Accueil
		}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {/*
		Statistique^ statistiqueForm = gcnew Statistique();
		this->Hide(); // Masquer le formulaire de connexion
		statistiqueForm->ShowDialog();
		*/
		this->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		List<String^>^ colonneArticle = gcnew List<String^>();
		colonneArticle->Add("ID");
		colonneArticle->Add("Nom");
		colonneArticle->Add("Nature");
		colonneArticle->Add("Couleur");
		colonneArticle->Add("PrixHT");
		colonneArticle->Add("PrixTTC");
		colonneArticle->Add("Qte_stocker");
		colonneArticle->Add("seuil_reappro");
		colonneArticle->Add("taux_TVA");
		colonneArticle->Add("Prix_variable");
		colonneArticle->Add("Prix_fournisseur");
		colonneArticle->Add("en_vente");
		Interface^ face = gcnew Interface("Stock", Table::Article,colonneArticle);
		this->Hide(); // Masquer le formulaire de connexion
		face->ShowDialog();
		this->Show();;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		List<String^>^ colonneCommande = gcnew List<String^>();
		colonneCommande->Add("ID");
		colonneCommande->Add("Date_livraison");
		colonneCommande->Add("Date_paiement");
		colonneCommande->Add("Date_emission");
		colonneCommande->Add("Moyen_paiement");
		colonneCommande->Add("ID_client");
		colonneCommande->Add("ID_Personnel");
		colonneCommande->Add("Date_creation_commande");
		colonneCommande->Add("Prix_commande");
		colonneCommande->Add("Reference");
		colonneCommande->Add("Remise");
		Interface^ face = gcnew Interface("Commande", Table::Commande,colonneCommande);
		this->Hide(); // Masquer le formulaire de connexion
		face->ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		List<String^>^ colonneClient = gcnew List<String^>();
		colonneClient->Add("ID");
		colonneClient->Add("Nom");
		colonneClient->Add("Prenom");
		colonneClient->Add("Adresse_facturation");
		colonneClient->Add("Adresse_livraison");
		colonneClient->Add("Date_de_naissance");
		colonneClient->Add("Premier_achat");
		colonneClient->Add("client_inscrit");
		Interface^ face = gcnew Interface("Client",Table::Client,colonneClient);
		this->Hide(); // Masquer le formulaire de connexion
		face->ShowDialog();
		this->Show();
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		List<String^>^ colonnePersonnel = gcnew List<String^>();
		colonnePersonnel->Add("ID");
		colonnePersonnel->Add("Nom");
		colonnePersonnel->Add("Prenom");
		colonnePersonnel->Add("Poste");
		colonnePersonnel->Add("Adresse");
		colonnePersonnel->Add("Date_embauche");
		colonnePersonnel->Add("ID_superieur");
		Interface^ face = gcnew Interface("Personnel", Table::Personnel, colonnePersonnel);
		this->Hide(); // Masquer le formulaire de connexion
		face->ShowDialog();
		this->Show();
}
private: System::Void Accueil_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}