#pragma once

namespace CL_GestionCommande {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommande
	/// </summary>
	public ref class GestionCommande : public System::Windows::Forms::Form
	{
	public:
		GestionCommande(void)
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
		~GestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_NomArticle;
	protected:
	private: System::Windows::Forms::Label^ lbl_NomArticle;

	private: System::Windows::Forms::Button^ BtnEnregistrer;
	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ Btn_Ajouter;
	private: System::Windows::Forms::Button^ BtnSuivant;
	private: System::Windows::Forms::Button^ Btn_Avant;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Label^ lbl_console;
	private: System::Windows::Forms::TextBox^ txt_RefCommande;
	private: System::Windows::Forms::Label^ lbl_RefCommande;


	private: System::Windows::Forms::TextBox^ txt_IdCommande;
	private: System::Windows::Forms::Label^ lbl_IdCommande;
	private: System::Windows::Forms::TextBox^ txtQuantitee;
	private: System::Windows::Forms::Label^ lblQuantite;
	private: System::Windows::Forms::TextBox^ txtNatureArticle;
	private: System::Windows::Forms::Label^ lblNature;
	private: System::Windows::Forms::TextBox^ TxtTauxTVA;
	private: System::Windows::Forms::Label^ lblTauxTVA;
	private: System::Windows::Forms::TextBox^ txtPrixHT;
	private: System::Windows::Forms::Label^ lblPrixHT;




	private: System::Windows::Forms::DataGridView^ dataGridViewDate;
	private: System::Windows::Forms::Label^ lbl_DateCommande;
	private: System::Windows::Forms::Button^ BtnFin;
	private: System::Windows::Forms::Button^ BtnDebut;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblPrenomClient;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lblNomClient;
	private: System::Windows::Forms::TextBox^ txt_IdClient;
	private: System::Windows::Forms::Label^ lbl_idclient;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ lblSelectClient;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_NomArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_NomArticle = (gcnew System::Windows::Forms::Label());
			this->BtnEnregistrer = (gcnew System::Windows::Forms::Button());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->Btn_Ajouter = (gcnew System::Windows::Forms::Button());
			this->BtnSuivant = (gcnew System::Windows::Forms::Button());
			this->Btn_Avant = (gcnew System::Windows::Forms::Button());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_console = (gcnew System::Windows::Forms::Label());
			this->txt_RefCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_RefCommande = (gcnew System::Windows::Forms::Label());
			this->txt_IdCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IdCommande = (gcnew System::Windows::Forms::Label());
			this->txtQuantitee = (gcnew System::Windows::Forms::TextBox());
			this->lblQuantite = (gcnew System::Windows::Forms::Label());
			this->txtNatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->lblNature = (gcnew System::Windows::Forms::Label());
			this->TxtTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->lblTauxTVA = (gcnew System::Windows::Forms::Label());
			this->txtPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->lblPrixHT = (gcnew System::Windows::Forms::Label());
			this->dataGridViewDate = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_DateCommande = (gcnew System::Windows::Forms::Label());
			this->BtnFin = (gcnew System::Windows::Forms::Button());
			this->BtnDebut = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblPrenomClient = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lblNomClient = (gcnew System::Windows::Forms::Label());
			this->txt_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idclient = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->lblSelectClient = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDate))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(12, 222);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(344, 20);
			this->txt_NomArticle->TabIndex = 43;
			// 
			// lbl_NomArticle
			// 
			this->lbl_NomArticle->AutoSize = true;
			this->lbl_NomArticle->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lbl_NomArticle->Location = System::Drawing::Point(19, 206);
			this->lbl_NomArticle->Name = L"lbl_NomArticle";
			this->lbl_NomArticle->Size = System::Drawing::Size(79, 13);
			this->lbl_NomArticle->TabIndex = 42;
			this->lbl_NomArticle->Text = L"Nom de l\'article";
			// 
			// BtnEnregistrer
			// 
			this->BtnEnregistrer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnEnregistrer->Location = System::Drawing::Point(681, 284);
			this->BtnEnregistrer->Name = L"BtnEnregistrer";
			this->BtnEnregistrer->Size = System::Drawing::Size(181, 310);
			this->BtnEnregistrer->TabIndex = 36;
			this->BtnEnregistrer->Text = L"ENREGISTRER";
			this->BtnEnregistrer->UseVisualStyleBackColor = false;
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(402, 507);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(239, 82);
			this->btn_suppr->TabIndex = 35;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = false;
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(402, 398);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(239, 82);
			this->btn_modifier->TabIndex = 34;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(402, 284);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(239, 82);
			this->Btn_Ajouter->TabIndex = 33;
			this->Btn_Ajouter->Text = L"Ajouter";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			// 
			// BtnSuivant
			// 
			this->BtnSuivant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnSuivant->Location = System::Drawing::Point(182, 448);
			this->BtnSuivant->Name = L"BtnSuivant";
			this->BtnSuivant->Size = System::Drawing::Size(119, 23);
			this->BtnSuivant->TabIndex = 32;
			this->BtnSuivant->Text = L"Suivant";
			this->BtnSuivant->UseVisualStyleBackColor = false;
			// 
			// Btn_Avant
			// 
			this->Btn_Avant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Avant->Location = System::Drawing::Point(37, 448);
			this->Btn_Avant->Name = L"Btn_Avant";
			this->Btn_Avant->Size = System::Drawing::Size(139, 23);
			this->Btn_Avant->TabIndex = 31;
			this->Btn_Avant->Text = L"Précédent";
			this->Btn_Avant->UseVisualStyleBackColor = false;
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(412, 610);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(450, 93);
			this->txt_message->TabIndex = 30;
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(427, 594);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(45, 13);
			this->lbl_console->TabIndex = 29;
			this->lbl_console->Text = L"Console";
			// 
			// txt_RefCommande
			// 
			this->txt_RefCommande->Location = System::Drawing::Point(12, 175);
			this->txt_RefCommande->Name = L"txt_RefCommande";
			this->txt_RefCommande->Size = System::Drawing::Size(344, 20);
			this->txt_RefCommande->TabIndex = 28;
			// 
			// lbl_RefCommande
			// 
			this->lbl_RefCommande->AutoSize = true;
			this->lbl_RefCommande->Location = System::Drawing::Point(19, 159);
			this->lbl_RefCommande->Name = L"lbl_RefCommande";
			this->lbl_RefCommande->Size = System::Drawing::Size(138, 13);
			this->lbl_RefCommande->TabIndex = 27;
			this->lbl_RefCommande->Text = L"Référence de la commande";
			// 
			// txt_IdCommande
			// 
			this->txt_IdCommande->Location = System::Drawing::Point(12, 32);
			this->txt_IdCommande->Name = L"txt_IdCommande";
			this->txt_IdCommande->ReadOnly = true;
			this->txt_IdCommande->Size = System::Drawing::Size(344, 20);
			this->txt_IdCommande->TabIndex = 24;
			// 
			// lbl_IdCommande
			// 
			this->lbl_IdCommande->AutoSize = true;
			this->lbl_IdCommande->Location = System::Drawing::Point(19, 11);
			this->lbl_IdCommande->Name = L"lbl_IdCommande";
			this->lbl_IdCommande->Size = System::Drawing::Size(74, 13);
			this->lbl_IdCommande->TabIndex = 23;
			this->lbl_IdCommande->Text = L"ID Commande";
			// 
			// txtQuantitee
			// 
			this->txtQuantitee->Location = System::Drawing::Point(12, 317);
			this->txtQuantitee->Name = L"txtQuantitee";
			this->txtQuantitee->Size = System::Drawing::Size(344, 20);
			this->txtQuantitee->TabIndex = 47;
			// 
			// lblQuantite
			// 
			this->lblQuantite->AutoSize = true;
			this->lblQuantite->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblQuantite->Location = System::Drawing::Point(19, 301);
			this->lblQuantite->Name = L"lblQuantite";
			this->lblQuantite->Size = System::Drawing::Size(53, 13);
			this->lblQuantite->TabIndex = 46;
			this->lblQuantite->Text = L"Quantitée";
			// 
			// txtNatureArticle
			// 
			this->txtNatureArticle->Location = System::Drawing::Point(12, 270);
			this->txtNatureArticle->Name = L"txtNatureArticle";
			this->txtNatureArticle->Size = System::Drawing::Size(344, 20);
			this->txtNatureArticle->TabIndex = 45;
			// 
			// lblNature
			// 
			this->lblNature->AutoSize = true;
			this->lblNature->Location = System::Drawing::Point(19, 254);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(89, 13);
			this->lblNature->TabIndex = 44;
			this->lblNature->Text = L"Nature de l\'article";
			// 
			// TxtTauxTVA
			// 
			this->TxtTauxTVA->Location = System::Drawing::Point(12, 411);
			this->TxtTauxTVA->Name = L"TxtTauxTVA";
			this->TxtTauxTVA->Size = System::Drawing::Size(344, 20);
			this->TxtTauxTVA->TabIndex = 51;
			// 
			// lblTauxTVA
			// 
			this->lblTauxTVA->AutoSize = true;
			this->lblTauxTVA->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblTauxTVA->Location = System::Drawing::Point(19, 395);
			this->lblTauxTVA->Name = L"lblTauxTVA";
			this->lblTauxTVA->Size = System::Drawing::Size(55, 13);
			this->lblTauxTVA->TabIndex = 50;
			this->lblTauxTVA->Text = L"Taux TVA";
			// 
			// txtPrixHT
			// 
			this->txtPrixHT->Location = System::Drawing::Point(12, 364);
			this->txtPrixHT->Name = L"txtPrixHT";
			this->txtPrixHT->Size = System::Drawing::Size(344, 20);
			this->txtPrixHT->TabIndex = 49;
			// 
			// lblPrixHT
			// 
			this->lblPrixHT->AutoSize = true;
			this->lblPrixHT->Location = System::Drawing::Point(19, 348);
			this->lblPrixHT->Name = L"lblPrixHT";
			this->lblPrixHT->Size = System::Drawing::Size(42, 13);
			this->lblPrixHT->TabIndex = 48;
			this->lblPrixHT->Text = L"Prix HT";
			// 
			// dataGridViewDate
			// 
			this->dataGridViewDate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDate->Location = System::Drawing::Point(12, 76);
			this->dataGridViewDate->Name = L"dataGridViewDate";
			this->dataGridViewDate->Size = System::Drawing::Size(344, 69);
			this->dataGridViewDate->TabIndex = 57;
			// 
			// lbl_DateCommande
			// 
			this->lbl_DateCommande->AutoSize = true;
			this->lbl_DateCommande->Location = System::Drawing::Point(19, 60);
			this->lbl_DateCommande->Name = L"lbl_DateCommande";
			this->lbl_DateCommande->Size = System::Drawing::Size(100, 13);
			this->lbl_DateCommande->TabIndex = 56;
			this->lbl_DateCommande->Text = L"Date de commande";
			// 
			// BtnFin
			// 
			this->BtnFin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnFin->Location = System::Drawing::Point(182, 490);
			this->BtnFin->Name = L"BtnFin";
			this->BtnFin->Size = System::Drawing::Size(119, 23);
			this->BtnFin->TabIndex = 84;
			this->BtnFin->Text = L"Fin";
			this->BtnFin->UseVisualStyleBackColor = false;
			// 
			// BtnDebut
			// 
			this->BtnDebut->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDebut->Location = System::Drawing::Point(37, 490);
			this->BtnDebut->Name = L"BtnDebut";
			this->BtnDebut->Size = System::Drawing::Size(139, 23);
			this->BtnDebut->TabIndex = 83;
			this->BtnDebut->Text = L"Début";
			this->BtnDebut->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(481, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(344, 20);
			this->textBox1->TabIndex = 90;
			// 
			// lblPrenomClient
			// 
			this->lblPrenomClient->AutoSize = true;
			this->lblPrenomClient->Location = System::Drawing::Point(488, 157);
			this->lblPrenomClient->Name = L"lblPrenomClient";
			this->lblPrenomClient->Size = System::Drawing::Size(72, 13);
			this->lblPrenomClient->TabIndex = 89;
			this->lblPrenomClient->Text = L"Prénom Client";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(481, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(344, 20);
			this->textBox2->TabIndex = 88;
			// 
			// lblNomClient
			// 
			this->lblNomClient->AutoSize = true;
			this->lblNomClient->Location = System::Drawing::Point(488, 104);
			this->lblNomClient->Name = L"lblNomClient";
			this->lblNomClient->Size = System::Drawing::Size(58, 13);
			this->lblNomClient->TabIndex = 87;
			this->lblNomClient->Text = L"Nom Client";
			// 
			// txt_IdClient
			// 
			this->txt_IdClient->Location = System::Drawing::Point(481, 74);
			this->txt_IdClient->Name = L"txt_IdClient";
			this->txt_IdClient->Size = System::Drawing::Size(344, 20);
			this->txt_IdClient->TabIndex = 86;
			// 
			// lbl_idclient
			// 
			this->lbl_idclient->AutoSize = true;
			this->lbl_idclient->Location = System::Drawing::Point(488, 58);
			this->lbl_idclient->Name = L"lbl_idclient";
			this->lbl_idclient->Size = System::Drawing::Size(47, 13);
			this->lbl_idclient->TabIndex = 85;
			this->lbl_idclient->Text = L"ID Client";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(660, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 94;
			this->button1->Text = L"Fin";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(515, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 23);
			this->button2->TabIndex = 93;
			this->button2->Text = L"Début";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Location = System::Drawing::Point(660, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 92;
			this->button3->Text = L"Suivant";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->Location = System::Drawing::Point(515, 199);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 23);
			this->button4->TabIndex = 91;
			this->button4->Text = L"Précédent";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// lblSelectClient
			// 
			this->lblSelectClient->AutoSize = true;
			this->lblSelectClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSelectClient->Location = System::Drawing::Point(487, 11);
			this->lblSelectClient->Name = L"lblSelectClient";
			this->lblSelectClient->Size = System::Drawing::Size(292, 24);
			this->lblSelectClient->TabIndex = 95;
			this->lblSelectClient->Text = L"Veuillez selectionner un client";
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(922, 755);
			this->Controls->Add(this->lblSelectClient);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblPrenomClient);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->lblNomClient);
			this->Controls->Add(this->txt_IdClient);
			this->Controls->Add(this->lbl_idclient);
			this->Controls->Add(this->BtnFin);
			this->Controls->Add(this->BtnDebut);
			this->Controls->Add(this->dataGridViewDate);
			this->Controls->Add(this->lbl_DateCommande);
			this->Controls->Add(this->TxtTauxTVA);
			this->Controls->Add(this->lblTauxTVA);
			this->Controls->Add(this->txtPrixHT);
			this->Controls->Add(this->lblPrixHT);
			this->Controls->Add(this->txtQuantitee);
			this->Controls->Add(this->lblQuantite);
			this->Controls->Add(this->txtNatureArticle);
			this->Controls->Add(this->lblNature);
			this->Controls->Add(this->txt_NomArticle);
			this->Controls->Add(this->lbl_NomArticle);
			this->Controls->Add(this->BtnEnregistrer);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->Btn_Ajouter);
			this->Controls->Add(this->BtnSuivant);
			this->Controls->Add(this->Btn_Avant);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_console);
			this->Controls->Add(this->txt_RefCommande);
			this->Controls->Add(this->lbl_RefCommande);
			this->Controls->Add(this->txt_IdCommande);
			this->Controls->Add(this->lbl_IdCommande);
			this->Name = L"GestionCommande";
			this->Text = L"GestionCommande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDate))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
