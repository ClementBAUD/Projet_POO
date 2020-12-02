#pragma once

namespace CL_GestionStock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStock
	/// </summary>
	public ref class GestionStock : public System::Windows::Forms::Form
	{
	public:
		GestionStock(void)
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
		~GestionStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TxtTauxTVA;
	protected:
	private: System::Windows::Forms::Label^ lblTauxTVA;
	private: System::Windows::Forms::TextBox^ txtPrixHT;
	private: System::Windows::Forms::Label^ lblPrixHTArticle;
	private: System::Windows::Forms::TextBox^ txtQuantitee;
	private: System::Windows::Forms::Label^ lblStock;
	private: System::Windows::Forms::TextBox^ txtNatureArticle;
	private: System::Windows::Forms::Label^ lblNature;
	private: System::Windows::Forms::TextBox^ txt_NomArticle;
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
	private: System::Windows::Forms::Label^ lbl_RefArticle;
	private: System::Windows::Forms::TextBox^ txt_IdCommande;
	private: System::Windows::Forms::Label^ lbl_IdArticle;
	private: System::Windows::Forms::TextBox^ txtCouleur;
	private: System::Windows::Forms::Label^ lblCouleurArticle;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnFin;
	private: System::Windows::Forms::Button^ BtnDebut;

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
			this->TxtTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->lblTauxTVA = (gcnew System::Windows::Forms::Label());
			this->txtPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->lblPrixHTArticle = (gcnew System::Windows::Forms::Label());
			this->txtQuantitee = (gcnew System::Windows::Forms::TextBox());
			this->lblStock = (gcnew System::Windows::Forms::Label());
			this->txtNatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->lblNature = (gcnew System::Windows::Forms::Label());
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
			this->lbl_RefArticle = (gcnew System::Windows::Forms::Label());
			this->txt_IdCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IdArticle = (gcnew System::Windows::Forms::Label());
			this->txtCouleur = (gcnew System::Windows::Forms::TextBox());
			this->lblCouleurArticle = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnFin = (gcnew System::Windows::Forms::Button());
			this->BtnDebut = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TxtTauxTVA
			// 
			this->TxtTauxTVA->Location = System::Drawing::Point(10, 409);
			this->TxtTauxTVA->Name = L"TxtTauxTVA";
			this->TxtTauxTVA->Size = System::Drawing::Size(344, 20);
			this->TxtTauxTVA->TabIndex = 76;
			// 
			// lblTauxTVA
			// 
			this->lblTauxTVA->AutoSize = true;
			this->lblTauxTVA->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblTauxTVA->Location = System::Drawing::Point(17, 393);
			this->lblTauxTVA->Name = L"lblTauxTVA";
			this->lblTauxTVA->Size = System::Drawing::Size(55, 13);
			this->lblTauxTVA->TabIndex = 75;
			this->lblTauxTVA->Text = L"Taux TVA";
			// 
			// txtPrixHT
			// 
			this->txtPrixHT->Location = System::Drawing::Point(10, 78);
			this->txtPrixHT->Name = L"txtPrixHT";
			this->txtPrixHT->Size = System::Drawing::Size(344, 20);
			this->txtPrixHT->TabIndex = 74;
			// 
			// lblPrixHTArticle
			// 
			this->lblPrixHTArticle->AutoSize = true;
			this->lblPrixHTArticle->Location = System::Drawing::Point(17, 62);
			this->lblPrixHTArticle->Name = L"lblPrixHTArticle";
			this->lblPrixHTArticle->Size = System::Drawing::Size(42, 13);
			this->lblPrixHTArticle->TabIndex = 73;
			this->lblPrixHTArticle->Text = L"Prix HT";
			// 
			// txtQuantitee
			// 
			this->txtQuantitee->Location = System::Drawing::Point(10, 222);
			this->txtQuantitee->Name = L"txtQuantitee";
			this->txtQuantitee->Size = System::Drawing::Size(344, 20);
			this->txtQuantitee->TabIndex = 72;
			// 
			// lblStock
			// 
			this->lblStock->AutoSize = true;
			this->lblStock->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblStock->Location = System::Drawing::Point(17, 206);
			this->lblStock->Name = L"lblStock";
			this->lblStock->Size = System::Drawing::Size(35, 13);
			this->lblStock->TabIndex = 71;
			this->lblStock->Text = L"Stock";
			// 
			// txtNatureArticle
			// 
			this->txtNatureArticle->Location = System::Drawing::Point(10, 271);
			this->txtNatureArticle->Name = L"txtNatureArticle";
			this->txtNatureArticle->Size = System::Drawing::Size(344, 20);
			this->txtNatureArticle->TabIndex = 70;
			// 
			// lblNature
			// 
			this->lblNature->AutoSize = true;
			this->lblNature->Location = System::Drawing::Point(17, 255);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(89, 13);
			this->lblNature->TabIndex = 69;
			this->lblNature->Text = L"Nature de l\'article";
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(10, 174);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(344, 20);
			this->txt_NomArticle->TabIndex = 68;
			// 
			// lbl_NomArticle
			// 
			this->lbl_NomArticle->AutoSize = true;
			this->lbl_NomArticle->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lbl_NomArticle->Location = System::Drawing::Point(17, 158);
			this->lbl_NomArticle->Name = L"lbl_NomArticle";
			this->lbl_NomArticle->Size = System::Drawing::Size(79, 13);
			this->lbl_NomArticle->TabIndex = 67;
			this->lbl_NomArticle->Text = L"Nom de l\'article";
			// 
			// BtnEnregistrer
			// 
			this->BtnEnregistrer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnEnregistrer->Location = System::Drawing::Point(687, 31);
			this->BtnEnregistrer->Name = L"BtnEnregistrer";
			this->BtnEnregistrer->Size = System::Drawing::Size(181, 310);
			this->BtnEnregistrer->TabIndex = 65;
			this->BtnEnregistrer->Text = L"ENREGISTRER";
			this->BtnEnregistrer->UseVisualStyleBackColor = false;
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(410, 254);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(239, 82);
			this->btn_suppr->TabIndex = 64;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = false;
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(410, 145);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(239, 82);
			this->btn_modifier->TabIndex = 63;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(410, 31);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(239, 82);
			this->Btn_Ajouter->TabIndex = 62;
			this->Btn_Ajouter->Text = L"Ajouter";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			// 
			// BtnSuivant
			// 
			this->BtnSuivant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnSuivant->Location = System::Drawing::Point(182, 450);
			this->BtnSuivant->Name = L"BtnSuivant";
			this->BtnSuivant->Size = System::Drawing::Size(119, 23);
			this->BtnSuivant->TabIndex = 61;
			this->BtnSuivant->Text = L"Suivant";
			this->BtnSuivant->UseVisualStyleBackColor = false;
			// 
			// Btn_Avant
			// 
			this->Btn_Avant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Avant->Location = System::Drawing::Point(37, 450);
			this->Btn_Avant->Name = L"Btn_Avant";
			this->Btn_Avant->Size = System::Drawing::Size(139, 23);
			this->Btn_Avant->TabIndex = 60;
			this->Btn_Avant->Text = L"Précédent";
			this->Btn_Avant->UseVisualStyleBackColor = false;
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(410, 380);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(450, 93);
			this->txt_message->TabIndex = 59;
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(425, 364);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(45, 13);
			this->lbl_console->TabIndex = 58;
			this->lbl_console->Text = L"Console";
			// 
			// txt_RefCommande
			// 
			this->txt_RefCommande->Location = System::Drawing::Point(10, 127);
			this->txt_RefCommande->Name = L"txt_RefCommande";
			this->txt_RefCommande->Size = System::Drawing::Size(344, 20);
			this->txt_RefCommande->TabIndex = 57;
			// 
			// lbl_RefArticle
			// 
			this->lbl_RefArticle->AutoSize = true;
			this->lbl_RefArticle->Location = System::Drawing::Point(17, 111);
			this->lbl_RefArticle->Name = L"lbl_RefArticle";
			this->lbl_RefArticle->Size = System::Drawing::Size(107, 13);
			this->lbl_RefArticle->TabIndex = 56;
			this->lbl_RefArticle->Text = L"Référence de l\'article";
			// 
			// txt_IdCommande
			// 
			this->txt_IdCommande->Location = System::Drawing::Point(10, 31);
			this->txt_IdCommande->Name = L"txt_IdCommande";
			this->txt_IdCommande->ReadOnly = true;
			this->txt_IdCommande->Size = System::Drawing::Size(344, 20);
			this->txt_IdCommande->TabIndex = 53;
			// 
			// lbl_IdArticle
			// 
			this->lbl_IdArticle->AutoSize = true;
			this->lbl_IdArticle->Location = System::Drawing::Point(17, 10);
			this->lbl_IdArticle->Name = L"lbl_IdArticle";
			this->lbl_IdArticle->Size = System::Drawing::Size(50, 13);
			this->lbl_IdArticle->TabIndex = 52;
			this->lbl_IdArticle->Text = L"ID Article";
			// 
			// txtCouleur
			// 
			this->txtCouleur->Location = System::Drawing::Point(10, 316);
			this->txtCouleur->Name = L"txtCouleur";
			this->txtCouleur->Size = System::Drawing::Size(344, 20);
			this->txtCouleur->TabIndex = 78;
			// 
			// lblCouleurArticle
			// 
			this->lblCouleurArticle->AutoSize = true;
			this->lblCouleurArticle->Location = System::Drawing::Point(17, 300);
			this->lblCouleurArticle->Name = L"lblCouleurArticle";
			this->lblCouleurArticle->Size = System::Drawing::Size(93, 13);
			this->lblCouleurArticle->TabIndex = 77;
			this->lblCouleurArticle->Text = L"Couleur de l\'article";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 361);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(344, 20);
			this->textBox1->TabIndex = 80;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 345);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 79;
			this->label1->Text = L"Couleur de l\'article";
			// 
			// BtnFin
			// 
			this->BtnFin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnFin->Location = System::Drawing::Point(182, 486);
			this->BtnFin->Name = L"BtnFin";
			this->BtnFin->Size = System::Drawing::Size(119, 23);
			this->BtnFin->TabIndex = 82;
			this->BtnFin->Text = L"Fin";
			this->BtnFin->UseVisualStyleBackColor = false;
			this->BtnFin->Click += gcnew System::EventHandler(this, &GestionStock::BtnFin_Click);
			// 
			// BtnDebut
			// 
			this->BtnDebut->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDebut->Location = System::Drawing::Point(37, 486);
			this->BtnDebut->Name = L"BtnDebut";
			this->BtnDebut->Size = System::Drawing::Size(139, 23);
			this->BtnDebut->TabIndex = 81;
			this->BtnDebut->Text = L"Début";
			this->BtnDebut->UseVisualStyleBackColor = false;
			this->BtnDebut->Click += gcnew System::EventHandler(this, &GestionStock::BtnDebut_Click);
			// 
			// GestionStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(880, 521);
			this->Controls->Add(this->BtnFin);
			this->Controls->Add(this->BtnDebut);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtCouleur);
			this->Controls->Add(this->lblCouleurArticle);
			this->Controls->Add(this->TxtTauxTVA);
			this->Controls->Add(this->lblTauxTVA);
			this->Controls->Add(this->txtPrixHT);
			this->Controls->Add(this->lblPrixHTArticle);
			this->Controls->Add(this->txtQuantitee);
			this->Controls->Add(this->lblStock);
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
			this->Controls->Add(this->lbl_RefArticle);
			this->Controls->Add(this->txt_IdCommande);
			this->Controls->Add(this->lbl_IdArticle);
			this->Name = L"GestionStock";
			this->Text = L"GestionStock";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnDebut_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->index = 0;
		//this->loadData(this->index);
		//this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}
private: System::Void BtnFin_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->index = this->ds->Tables["liste"]->Rows->Count - 1;
	//this->loadData(this->index);
	//this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
}
};
}
