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
		Interface(std::string type, Table table, List<String^>^ colonne)
		{
			BDD = new AccesBDD();
			InitializeComponent(type, table, colonne);
			this->table = table;
			this->colonne = colonne;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Interface()
		{
			delete BDD;
			if (components)
			{
				delete components;
			}
		}

	private: AccesBDD* BDD;
	private: List<String^>^ colonne;
	private: Table table;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ RETOUR;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


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
		void InitializeComponent(std::string type, Table table, List<String^>^ colonne)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RETOUR = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(200, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = msclr::interop::marshal_as<System::String^>(type);;
			// 
			// RETOUR
			// 
			this->RETOUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RETOUR->Location = System::Drawing::Point(26, 17);
			this->RETOUR->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->RETOUR->Name = L"RETOUR";
			this->RETOUR->Size = System::Drawing::Size(102, 23);
			this->RETOUR->TabIndex = 8;
			this->RETOUR->Text = L"< RETOUR";
			this->RETOUR->UseVisualStyleBackColor = true;
			this->RETOUR->Click += gcnew System::EventHandler(this, &Interface::RETOUR_Click);
			// 
			// listBox1
			// 
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(this->dataGridView1)->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->Location = System::Drawing::Point(8, 73);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(430, 303);
			this->dataGridView1->TabIndex = 9;
			this->Controls->Add(this->dataGridView1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(451, 73);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 44);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(451, 134);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 44);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(451, 192);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 42);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(436, 262);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 52);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Afficher";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(451, 247);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 42);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Afficher";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(560, 384);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->RETOUR);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
			ChargerDonneesDansDataGridView(table, colonne);
		}


			   void ChargerDonneesDansDataGridView(Table table, List<String^>^ colonne)
			   {
				   // Utilisez l'objet AccesBDD pour récupérer les données de la table spécifiée
				   List<List<String^>^>^ donnees = BDD->effectuerRequeteSQL("SELECT * FROM " + BDD->getref(table));

				   // Créez les colonnes de la DataGridView (vous devrez ajuster cela en fonction de votre modèle de données)
				   this->dataGridView1->Columns->Clear();

				   for (int i = 0; i < colonne->Count; i++)
				   {
					   this->dataGridView1->Columns->Add(gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
					   this->dataGridView1->Columns[i]->HeaderText = colonne[i];
				   }

			// Ajoutez les données à la DataGridView
			for each (List<String^> ^ liste in donnees)
			{

				this->dataGridView1->Rows->Add(String::Join("\t", liste->ToArray()));
			}
		}
	private: System::Void Interface_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Interface_Load_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
