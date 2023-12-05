#pragma once
#include "Accueil.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelErrorMessage;
	private:System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->labelErrorMessage = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(101, 213);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(94, 20);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Username";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(101, 293);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(91, 20);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Password";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(51, 53);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(265, 50);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Votre centre d’information \r\n      sur notre évolution ";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label4->Location = System::Drawing::Point(75, 158);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(140, 18);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Connectez vous :";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(356, 44);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(133, 69);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 4;
			   this->pictureBox1->TabStop = false;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(222, 213);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(202, 22);
			   this->textBox1->TabIndex = 5;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(222, 293);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(202, 22);
			   this->textBox2->TabIndex = 6;
			   this->textBox2->UseSystemPasswordChar = true;
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->Location = System::Drawing::Point(195, 359);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(132, 31);
			   this->button1->TabIndex = 7;
			   this->button1->Text = L"Connection";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // labelErrorMessage
			   // 
			   this->labelErrorMessage->AutoSize = true;
			   this->labelErrorMessage->Location = System::Drawing::Point(195, 400);
			   this->labelErrorMessage->Name = L"labelErrorMessage";
			   this->labelErrorMessage->Size = System::Drawing::Size(0, 16);
			   this->labelErrorMessage->TabIndex = 8;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::DarkGray;
			   this->ClientSize = System::Drawing::Size(537, 473);
			   this->Controls->Add(this->labelErrorMessage);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"MyForm";
			   this->Text = L"Login";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si les informations d'identification sont correctes
		if (textBox1->Text == "admin" && textBox2->Text == "1234") {
			// Si correct, affichez le formulaire Accueil
			Accueil^ accueilForm = gcnew Accueil();
			this->Hide(); // Masquer le formulaire de connexion
			accueilForm->ShowDialog();
			this->Show(); // Afficher à nouveau le formulaire de connexion après la fermeture du formulaire Accueil
		}
		else {
			// Sinon, afficher un message d'erreur
			UpdateErrorMessage("Nom d'utilisateur ou mot de passe incorrect");
		}
	}

		   System::Void UpdateErrorMessage(System::String^ message)
		   {
			   labelErrorMessage->Text = message;
		   }


#pragma endregion
	};
}
