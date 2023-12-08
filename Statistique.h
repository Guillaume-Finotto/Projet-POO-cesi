﻿#pragma once
#include <string>
using namespace std;
#include "Stat.h";

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ RETOUR;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ ProduitsSousSeuil;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ Top10;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ Flop10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ mois;
	private: System::Windows::Forms::ComboBox^ annee;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ Actualiser2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ Actualiser1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;















	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->RETOUR = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ProduitsSousSeuil = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Top10 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Flop10 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->mois = (gcnew System::Windows::Forms::ComboBox());
			this->annee = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Actualiser2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Actualiser1 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Panier moyen (après remise) : ";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::RETOUR_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->RETOUR, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(24, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.28099F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(160, 41);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// RETOUR
			// 
			this->RETOUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RETOUR->Location = System::Drawing::Point(3, 3);
			this->RETOUR->Name = L"RETOUR";
			this->RETOUR->Size = System::Drawing::Size(153, 35);
			this->RETOUR->TabIndex = 0;
			this->RETOUR->Text = L"< RETOUR";
			this->RETOUR->UseVisualStyleBackColor = true;
			this->RETOUR->Click += gcnew System::EventHandler(this, &MainForm::RETOUR_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(404, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Statistiques";
			// 
			// ProduitsSousSeuil
			// 
			this->ProduitsSousSeuil->ColumnWidth = 10000;
			this->ProduitsSousSeuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProduitsSousSeuil->FormattingEnabled = true;
			this->ProduitsSousSeuil->ItemHeight = 25;
			this->ProduitsSousSeuil->Location = System::Drawing::Point(15, 231);
			this->ProduitsSousSeuil->Name = L"ProduitsSousSeuil";
			this->ProduitsSousSeuil->Size = System::Drawing::Size(289, 154);
			this->ProduitsSousSeuil->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 52);
			this->label2->TabIndex = 9;
			this->label2->Text = L"En dessous du seuil \r\nde réapprovisionnement : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(332, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Les plus vendus : ";
			// 
			// Top10
			// 
			this->Top10->ColumnWidth = 10000;
			this->Top10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Top10->FormattingEnabled = true;
			this->Top10->ItemHeight = 25;
			this->Top10->Location = System::Drawing::Point(314, 231);
			this->Top10->Name = L"Top10";
			this->Top10->Size = System::Drawing::Size(304, 154);
			this->Top10->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(617, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 26);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Les moins vendus : ";
			// 
			// Flop10
			// 
			this->Flop10->ColumnWidth = 10000;
			this->Flop10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Flop10->FormattingEnabled = true;
			this->Flop10->ItemHeight = 25;
			this->Flop10->Location = System::Drawing::Point(629, 231);
			this->Flop10->Name = L"Flop10";
			this->Flop10->Size = System::Drawing::Size(291, 154);
			this->Flop10->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(49, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(201, 26);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Chiffre d\'Affaire en ";
			// 
			// mois
			// 
			this->mois->FormattingEnabled = true;
			this->mois->Location = System::Drawing::Point(272, 129);
			this->mois->Name = L"mois";
			this->mois->Size = System::Drawing::Size(121, 28);
			this->mois->TabIndex = 17;
			this->mois->Text = L"choisir mois";
			// 
			// annee
			// 
			this->annee->FormattingEnabled = true;
			this->annee->Location = System::Drawing::Point(415, 129);
			this->annee->Name = L"annee";
			this->annee->Size = System::Drawing::Size(140, 28);
			this->annee->TabIndex = 18;
			this->annee->Text = L"choisir année";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->Actualiser2, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(788, 119);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.28099F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(135, 49);
			this->tableLayoutPanel2->TabIndex = 19;
			// 
			// Actualiser2
			// 
			this->Actualiser2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Actualiser2->Location = System::Drawing::Point(3, 3);
			this->Actualiser2->Name = L"Actualiser2";
			this->Actualiser2->Size = System::Drawing::Size(122, 43);
			this->Actualiser2->TabIndex = 0;
			this->Actualiser2->Text = L"Actualiser";
			this->Actualiser2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(381, 83);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 29);
			this->label7->TabIndex = 20;
			this->label7->Text = L"50€";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(561, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 26);
			this->label8->TabIndex = 21;
			this->label8->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(639, 129);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 29);
			this->label9->TabIndex = 22;
			this->label9->Text = L"124000€";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(49, 403);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(341, 26);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Montant total des achats du client";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(617, 403);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 26);
			this->label11->TabIndex = 24;
			this->label11->Text = L":";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(415, 403);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 26);
			this->textBox1->TabIndex = 25;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox1_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(688, 400);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 29);
			this->label12->TabIndex = 26;
			this->label12->Text = L"124€";
			// 
			// Actualiser1
			// 
			this->Actualiser1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Actualiser1->Location = System::Drawing::Point(500, 75);
			this->Actualiser1->Name = L"Actualiser1";
			this->Actualiser1->Size = System::Drawing::Size(111, 46);
			this->Actualiser1->TabIndex = 27;
			this->Actualiser1->Text = L"Actualiser";
			this->Actualiser1->UseVisualStyleBackColor = true;
			this->Actualiser1->Click += gcnew System::EventHandler(this, &MainForm::Actualiser1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(500, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 46);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Actualiser";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(381, 458);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 29);
			this->label13->TabIndex = 29;
			this->label13->Text = L"50€";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(49, 461);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(305, 26);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Valeur commerciale du stock : ";
			this->label14->Click += gcnew System::EventHandler(this, &MainForm::label14_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(500, 505);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 46);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Actualiser";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(381, 513);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 29);
			this->label15->TabIndex = 32;
			this->label15->Text = L"50€";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(49, 516);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(244, 26);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Valeur d\'achat du stock :";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(935, 590);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Actualiser1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->annee);
			this->Controls->Add(this->mois);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Flop10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Top10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ProduitsSousSeuil);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RETOUR_Click(System::Object^ sender, System::EventArgs^ e) {

	};

		   void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
		   {
			   if (e->KeyChar == 13)
			   {
				   label12->Text = textBox1->Text;
			   }
		   }

	private: System::Void Actualiser1_Click(System::Object^ sender, System::EventArgs^ e) {
		label7->Text = obtenirPanierMoyen();
	}

	private: System::Void Actualiser2_Click(System::Object^ sender, System::EventArgs^ e) {
		label9->Text = obtenirCA(annee->Text, mois->Text);
	}
		   void ajouterPSS() {
			   ProduitsSousSeuil->Items->Add("Numéro\tNom\tNature");
			   string** x = obtenirproduitsSousSeuil();
			   int taille = sizeof(x) / sizeof(x[0]);

			   for (int i = 0; i < taille; ++i) {
				   String^ produitFormate = String::Format("{0}\t{1}\t{2]}", x[i]->Numero, x[i]->Nom, x[i]->Nature);
				   ProduitsSousSeuil->Items->Add(produitFormate);
			   }
		   }
		   void ajouterTop10() {
			   Top10->Items->Add("Numéro\tNom\tNature");
			   string** x = obtenirTop10();
			   int taille = sizeof(x) / sizeof(x[0]);

			   for (int i = 0; i < taille; ++i) {
				   String^ produitFormate = String::Format("{0}\t{1}\t{2]}", x[i]->Numero, x[i]->Nom, x[i]->Nature);
				   Top10->Items->Add(produitFormate);
			   }
		   }
		   void ajouterFlop10() {
			   Flop10->Items->Add("Numéro\tNom\tNature");
			   string** x = obtenirFlop10();
			   int taille = sizeof(x) / sizeof(x[0]);

			   for (int i = 0; i < taille; ++i) {
				   String^ produitFormate = String::Format("{0}\t{1}\t{2]}", x, x[i]->Nom, x[i]->Nature);
				   Flop10->Items->Add(produitFormate);
			   }
		   }
	private: System::Void Actualiser3_Click(System::Object^ sender, System::EventArgs^ e) {
		label13->Text = obtenirPrixStock();
	}

	private: System::Void Actualiser4_Click(System::Object^ sender, System::EventArgs^ e) {
		label15->Text = obtenirCoutStock();
	}

		   void configCompoBox() {
			   array<String^>^ moisTab = { "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre" };
			   mois->Items->AddRange(moisTab);
			   Controls->Add(mois);

			   array<String^>^ anneeTab = { "2020", "2021", "2022", "2023" };
			   annee->Items->AddRange(anneeTab);
			   Controls->Add(annee);
		   }
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		ProduitsSousSeuil->Items->Add("Numéro\tNom\tNature");
		ProduitsSousSeuil->Items->Add("259\tYaourt\tFrais");
		ProduitsSousSeuil->Items->Add("444\tRavioli\tConserve");
		ProduitsSousSeuil->Items->Add("39\tCoca\tBoisson");
		ProduitsSousSeuil->Items->Add("259\tYaourt\tFrais");
		ProduitsSousSeuil->Items->Add("444\tRavioli\tConserve");
		ProduitsSousSeuil->Items->Add("39\tCoca\tBoisson");
		ProduitsSousSeuil->Items->Add("259\tYaourt\tFrais");
		ProduitsSousSeuil->Items->Add("444\tRavioli\tConserve");
		ProduitsSousSeuil->Items->Add("39\tCoca\tBoisson");

		Top10->Items->Add("Numéro\tNom\tNature");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");
		Top10->Items->Add("259\tYaourt\tFrais");

		Flop10->Items->Add("Numéro\tNom\tNature");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");
		Flop10->Items->Add("259\tYaourt\tFrais");

		int largeurDesColonnes = TextRenderer::MeasureText("444\tRavioli\tConserve", ProduitsSousSeuil->Font).Width;
		ProduitsSousSeuil->ColumnWidth = largeurDesColonnes;
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
