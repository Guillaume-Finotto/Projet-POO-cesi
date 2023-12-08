#pragma once
#include <string>
using namespace std;
#include "Stat.h";
/*
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
		AccesBDD* DBB = &AccesBDD();
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 20);
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(21, 22);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.28099F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(142, 33);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// RETOUR
			// 
			this->RETOUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RETOUR->Location = System::Drawing::Point(3, 2);
			this->RETOUR->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RETOUR->Name = L"RETOUR";
			this->RETOUR->Size = System::Drawing::Size(136, 28);
			this->RETOUR->TabIndex = 0;
			this->RETOUR->Text = L"< RETOUR";
			this->RETOUR->UseVisualStyleBackColor = true;
			this->RETOUR->Click += gcnew System::EventHandler(this, &MainForm::RETOUR_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(359, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Statistiques";
			// 
			// ProduitsSousSeuil
			// 
			this->ProduitsSousSeuil->ColumnWidth = 10000;
			this->ProduitsSousSeuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProduitsSousSeuil->FormattingEnabled = true;
			this->ProduitsSousSeuil->ItemHeight = 20;
			this->ProduitsSousSeuil->Location = System::Drawing::Point(13, 185);
			this->ProduitsSousSeuil->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ProduitsSousSeuil->Name = L"ProduitsSousSeuil";
			this->ProduitsSousSeuil->Size = System::Drawing::Size(257, 124);
			this->ProduitsSousSeuil->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 40);
			this->label2->TabIndex = 9;
			this->label2->Text = L"En dessous du seuil \r\nde réapprovisionnement : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(295, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Les plus vendus : ";
			// 
			// Top10
			// 
			this->Top10->ColumnWidth = 10000;
			this->Top10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Top10->FormattingEnabled = true;
			this->Top10->ItemHeight = 20;
			this->Top10->Location = System::Drawing::Point(279, 185);
			this->Top10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Top10->Name = L"Top10";
			this->Top10->Size = System::Drawing::Size(271, 124);
			this->Top10->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(548, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Les moins vendus : ";
			// 
			// Flop10
			// 
			this->Flop10->ColumnWidth = 10000;
			this->Flop10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Flop10->FormattingEnabled = true;
			this->Flop10->ItemHeight = 20;
			this->Flop10->Location = System::Drawing::Point(559, 185);
			this->Flop10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Flop10->Name = L"Flop10";
			this->Flop10->Size = System::Drawing::Size(259, 124);
			this->Flop10->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Chiffre d\'Affaire en ";
			// 
			// mois
			// 
			this->mois->FormattingEnabled = true;
			this->mois->Location = System::Drawing::Point(242, 103);
			this->mois->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mois->Name = L"mois";
			this->mois->Size = System::Drawing::Size(108, 24);
			this->mois->TabIndex = 17;
			this->mois->Text = L"choisir mois";
			// 
			// annee
			// 
			this->annee->FormattingEnabled = true;
			this->annee->Location = System::Drawing::Point(369, 103);
			this->annee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->annee->Name = L"annee";
			this->annee->Size = System::Drawing::Size(125, 24);
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
			this->tableLayoutPanel2->Location = System::Drawing::Point(700, 95);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.28099F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(120, 39);
			this->tableLayoutPanel2->TabIndex = 19;
			// 
			// Actualiser2
			// 
			this->Actualiser2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Actualiser2->Location = System::Drawing::Point(3, 2);
			this->Actualiser2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Actualiser2->Name = L"Actualiser2";
			this->Actualiser2->Size = System::Drawing::Size(108, 34);
			this->Actualiser2->TabIndex = 0;
			this->Actualiser2->Text = L"Actualiser";
			this->Actualiser2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(339, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 24);
			this->label7->TabIndex = 20;
			this->label7->Text = L"50€";
			this->label7->Click += gcnew System::EventHandler(this, &MainForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(499, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 20);
			this->label8->TabIndex = 21;
			this->label8->Text = L":";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(568, 103);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 24);
			this->label9->TabIndex = 22;
			this->label9->Text = L"124000€";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(44, 322);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(261, 20);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Montant total des achats du client";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(548, 322);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 20);
			this->label11->TabIndex = 24;
			this->label11->Text = L":";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(369, 322);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 22);
			this->textBox1->TabIndex = 25;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox1_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(612, 320);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 24);
			this->label12->TabIndex = 26;
			this->label12->Text = L"124€";
			// 
			// Actualiser1
			// 
			this->Actualiser1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Actualiser1->Location = System::Drawing::Point(444, 60);
			this->Actualiser1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Actualiser1->Name = L"Actualiser1";
			this->Actualiser1->Size = System::Drawing::Size(99, 37);
			this->Actualiser1->TabIndex = 27;
			this->Actualiser1->Text = L"Actualiser";
			this->Actualiser1->UseVisualStyleBackColor = true;
			this->Actualiser1->Click += gcnew System::EventHandler(this, &MainForm::Actualiser1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(444, 360);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 37);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Actualiser";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(339, 366);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 24);
			this->label13->TabIndex = 29;
			this->label13->Text = L"50€";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(44, 369);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(241, 20);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Valeur commerciale du stock : ";
			this->label14->Click += gcnew System::EventHandler(this, &MainForm::label14_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(444, 404);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 37);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Actualiser";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(339, 410);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 24);
			this->label15->TabIndex = 32;
			this->label15->Text = L"50€";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(44, 413);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(194, 20);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Valeur d\'achat du stock :";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(831, 472);
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
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
		AccesBDD* a;
		

		label7->Text = a->effectuerRequeteSQL("SELECT SUM(Prix_commande_Avec_remise) FROM Commande WHERE SUBSTRING(Date_paiement, 1, 6) = '" +  + "';")[0][0];

	}



	private: System::Void Actualiser2_Click(System::Object^ sender, System::EventArgs^ e) {
		AccesBDD* a;
		label9->Text = a.effectuerRequeteSQL(annee->Text, mois->Text);
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
			   
			   System::Array<String^>^ moisTab = gcnew array<String^>(12){ "Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre" };
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
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
*/