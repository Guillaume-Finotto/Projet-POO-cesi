#pragma once
#include <msclr/marshal_cppstd.h>
#include "Manager.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(std::string type, Table table)
		{
			InitializeComponent(type, table);
			this->table = table;
			this->BDD = BDD;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}

	private: AccesBDD* BDD;
	private: Table table;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ RETOUR;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur dsde.
		/// </summary>
		void InitializeComponent(std::string type, Table table)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RETOUR = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(299, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = msclr::interop::marshal_as<System::String^>(type);;
			// 
			// RETOUR
			// 
			this->RETOUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RETOUR->Location = System::Drawing::Point(34, 21);
			this->RETOUR->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RETOUR->Name = L"RETOUR";
			this->RETOUR->Size = System::Drawing::Size(136, 28);
			this->RETOUR->TabIndex = 8;
			this->RETOUR->Text = L"< RETOUR";
			this->RETOUR->UseVisualStyleBackColor = true;
			this->RETOUR->Click += gcnew System::EventHandler(this, &Interface::RETOUR_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(23, 111);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(364, 340);
			this->listBox1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(575, 111);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 66);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(404, 111);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 66);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(472, 193);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 64);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(747, 472);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->RETOUR);
			this->Controls->Add(this->label3);
			this->Name = L"Interface";
			this->Text = L"Interface";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RETOUR_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Leave();
	}
		   void Leave()
		   {
			   this->Close();
		   }

	private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e) {
		ChargerDonneesDansListBox(table);
	}
	private:
		// ... Autres membres de la classe

		void ChargerDonneesDansListBox(Table table)
		{
			// Utilisez l'objet AccesBDD pour récupérer les données de la table spécifiée
			Collections::Generic::List<String^>^ donnees = BDD->effectuerRequeteSQL("SELECT * FROM " + BDD->getref(table));


			for each (String ^ str in donnees)
			{
				listBox1->Items->Add(str);
			}
		}
	};
}
