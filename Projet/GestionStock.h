#pragma once
#include "CL_svc_gestionArticles.h"
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


	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Label^ lbl_console;
	private: System::Windows::Forms::TextBox^ txt_Refart;

	private: System::Windows::Forms::Label^ lbl_RefArticle;
	private: System::Windows::Forms::TextBox^ txt_Idart;

	private: System::Windows::Forms::Label^ lbl_IdArticle;
	private: System::Windows::Forms::TextBox^ txtCouleur;
	private: System::Windows::Forms::Label^ lblCouleurArticle;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: Data::DataSet^ ds;
	private: NS_services::CL_svc_gestionArticles^ article;
	private: String^ mode;
	private: System::Windows::Forms::TextBox^ txt_seuil;
	private: System::Windows::Forms::Label^ label1;



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
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_console = (gcnew System::Windows::Forms::Label());
			this->txt_Refart = (gcnew System::Windows::Forms::TextBox());
			this->lbl_RefArticle = (gcnew System::Windows::Forms::Label());
			this->txt_Idart = (gcnew System::Windows::Forms::TextBox());
			this->lbl_IdArticle = (gcnew System::Windows::Forms::Label());
			this->txtCouleur = (gcnew System::Windows::Forms::TextBox());
			this->lblCouleurArticle = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txt_seuil = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// TxtTauxTVA
			// 
			this->TxtTauxTVA->Location = System::Drawing::Point(13, 445);
			this->TxtTauxTVA->Margin = System::Windows::Forms::Padding(4);
			this->TxtTauxTVA->Name = L"TxtTauxTVA";
			this->TxtTauxTVA->Size = System::Drawing::Size(457, 22);
			this->TxtTauxTVA->TabIndex = 76;
			// 
			// lblTauxTVA
			// 
			this->lblTauxTVA->AutoSize = true;
			this->lblTauxTVA->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblTauxTVA->Location = System::Drawing::Point(17, 424);
			this->lblTauxTVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTauxTVA->Name = L"lblTauxTVA";
			this->lblTauxTVA->Size = System::Drawing::Size(70, 17);
			this->lblTauxTVA->TabIndex = 75;
			this->lblTauxTVA->Text = L"Taux TVA";
			// 
			// txtPrixHT
			// 
			this->txtPrixHT->Location = System::Drawing::Point(13, 493);
			this->txtPrixHT->Margin = System::Windows::Forms::Padding(4);
			this->txtPrixHT->Name = L"txtPrixHT";
			this->txtPrixHT->Size = System::Drawing::Size(457, 22);
			this->txtPrixHT->TabIndex = 74;
			// 
			// lblPrixHTArticle
			// 
			this->lblPrixHTArticle->AutoSize = true;
			this->lblPrixHTArticle->Location = System::Drawing::Point(10, 471);
			this->lblPrixHTArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrixHTArticle->Name = L"lblPrixHTArticle";
			this->lblPrixHTArticle->Size = System::Drawing::Size(54, 17);
			this->lblPrixHTArticle->TabIndex = 73;
			this->lblPrixHTArticle->Text = L"Prix HT";
			// 
			// txtQuantitee
			// 
			this->txtQuantitee->Location = System::Drawing::Point(13, 273);
			this->txtQuantitee->Margin = System::Windows::Forms::Padding(4);
			this->txtQuantitee->Name = L"txtQuantitee";
			this->txtQuantitee->Size = System::Drawing::Size(457, 22);
			this->txtQuantitee->TabIndex = 72;
			// 
			// lblStock
			// 
			this->lblStock->AutoSize = true;
			this->lblStock->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblStock->Location = System::Drawing::Point(23, 254);
			this->lblStock->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblStock->Name = L"lblStock";
			this->lblStock->Size = System::Drawing::Size(43, 17);
			this->lblStock->TabIndex = 71;
			this->lblStock->Text = L"Stock";
			// 
			// txtNatureArticle
			// 
			this->txtNatureArticle->Location = System::Drawing::Point(13, 334);
			this->txtNatureArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtNatureArticle->Name = L"txtNatureArticle";
			this->txtNatureArticle->Size = System::Drawing::Size(457, 22);
			this->txtNatureArticle->TabIndex = 70;
			// 
			// lblNature
			// 
			this->lblNature->AutoSize = true;
			this->lblNature->Location = System::Drawing::Point(23, 314);
			this->lblNature->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(119, 17);
			this->lblNature->TabIndex = 69;
			this->lblNature->Text = L"Nature de l\'article";
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(13, 214);
			this->txt_NomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(457, 22);
			this->txt_NomArticle->TabIndex = 68;
			// 
			// lbl_NomArticle
			// 
			this->lbl_NomArticle->AutoSize = true;
			this->lbl_NomArticle->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lbl_NomArticle->Location = System::Drawing::Point(23, 194);
			this->lbl_NomArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_NomArticle->Name = L"lbl_NomArticle";
			this->lbl_NomArticle->Size = System::Drawing::Size(105, 17);
			this->lbl_NomArticle->TabIndex = 67;
			this->lbl_NomArticle->Text = L"Nom de l\'article";
			// 
			// BtnEnregistrer
			// 
			this->BtnEnregistrer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnEnregistrer->Location = System::Drawing::Point(652, 38);
			this->BtnEnregistrer->Margin = System::Windows::Forms::Padding(4);
			this->BtnEnregistrer->Name = L"BtnEnregistrer";
			this->BtnEnregistrer->Size = System::Drawing::Size(241, 198);
			this->BtnEnregistrer->TabIndex = 65;
			this->BtnEnregistrer->Text = L"ENREGISTRER";
			this->BtnEnregistrer->UseVisualStyleBackColor = false;
			this->BtnEnregistrer->Click += gcnew System::EventHandler(this, &GestionStock::BtnEnregistrer_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(547, 171);
			this->btn_suppr->Margin = System::Windows::Forms::Padding(4);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(88, 65);
			this->btn_suppr->TabIndex = 64;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = false;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &GestionStock::btn_suppr_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(547, 101);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(88, 62);
			this->btn_modifier->TabIndex = 63;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &GestionStock::btn_modifier_Click);
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(547, 38);
			this->Btn_Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(88, 55);
			this->Btn_Ajouter->TabIndex = 62;
			this->Btn_Ajouter->Text = L"Ajouter";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			this->Btn_Ajouter->Click += gcnew System::EventHandler(this, &GestionStock::Btn_Ajouter_Click);
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(516, 514);
			this->txt_message->Margin = System::Windows::Forms::Padding(4);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(599, 114);
			this->txt_message->TabIndex = 59;
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(513, 493);
			this->lbl_console->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(59, 17);
			this->lbl_console->TabIndex = 58;
			this->lbl_console->Text = L"Console";
			// 
			// txt_Refart
			// 
			this->txt_Refart->Location = System::Drawing::Point(13, 156);
			this->txt_Refart->Margin = System::Windows::Forms::Padding(4);
			this->txt_Refart->Name = L"txt_Refart";
			this->txt_Refart->Size = System::Drawing::Size(457, 22);
			this->txt_Refart->TabIndex = 57;
			// 
			// lbl_RefArticle
			// 
			this->lbl_RefArticle->AutoSize = true;
			this->lbl_RefArticle->Location = System::Drawing::Point(23, 137);
			this->lbl_RefArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_RefArticle->Name = L"lbl_RefArticle";
			this->lbl_RefArticle->Size = System::Drawing::Size(142, 17);
			this->lbl_RefArticle->TabIndex = 56;
			this->lbl_RefArticle->Text = L"Référence de l\'article";
			// 
			// txt_Idart
			// 
			this->txt_Idart->Location = System::Drawing::Point(13, 38);
			this->txt_Idart->Margin = System::Windows::Forms::Padding(4);
			this->txt_Idart->Name = L"txt_Idart";
			this->txt_Idart->Size = System::Drawing::Size(457, 22);
			this->txt_Idart->TabIndex = 53;
			// 
			// lbl_IdArticle
			// 
			this->lbl_IdArticle->AutoSize = true;
			this->lbl_IdArticle->Location = System::Drawing::Point(23, 12);
			this->lbl_IdArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_IdArticle->Name = L"lbl_IdArticle";
			this->lbl_IdArticle->Size = System::Drawing::Size(64, 17);
			this->lbl_IdArticle->TabIndex = 52;
			this->lbl_IdArticle->Text = L"ID Article";
			// 
			// txtCouleur
			// 
			this->txtCouleur->Location = System::Drawing::Point(13, 389);
			this->txtCouleur->Margin = System::Windows::Forms::Padding(4);
			this->txtCouleur->Name = L"txtCouleur";
			this->txtCouleur->Size = System::Drawing::Size(457, 22);
			this->txtCouleur->TabIndex = 78;
			// 
			// lblCouleurArticle
			// 
			this->lblCouleurArticle->AutoSize = true;
			this->lblCouleurArticle->Location = System::Drawing::Point(23, 369);
			this->lblCouleurArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCouleurArticle->Name = L"lblCouleurArticle";
			this->lblCouleurArticle->Size = System::Drawing::Size(125, 17);
			this->lblCouleurArticle->TabIndex = 77;
			this->lblCouleurArticle->Text = L"Couleur de l\'article";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(516, 256);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(582, 228);
			this->dataGridView1->TabIndex = 83;
			// 
			// txt_seuil
			// 
			this->txt_seuil->Location = System::Drawing::Point(13, 539);
			this->txt_seuil->Margin = System::Windows::Forms::Padding(4);
			this->txt_seuil->Name = L"txt_seuil";
			this->txt_seuil->Size = System::Drawing::Size(457, 22);
			this->txt_seuil->TabIndex = 84;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 519);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 17);
			this->label1->TabIndex = 85;
			this->label1->Text = L"Seuil de réaprovisionnement";
			// 
			// GestionStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1173, 641);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_seuil);
			this->Controls->Add(this->dataGridView1);
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
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_console);
			this->Controls->Add(this->txt_Refart);
			this->Controls->Add(this->lbl_RefArticle);
			this->Controls->Add(this->txt_Idart);
			this->Controls->Add(this->lbl_IdArticle);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionStock";
			this->Text = L"GestionStock";
			this->Load += gcnew System::EventHandler(this, &GestionStock::GestionStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Btn_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtCouleur->Clear();
	this->txtNatureArticle->Clear();
	this->txtPrixHT->Clear();
	this->txtQuantitee->Clear();
	this->TxtTauxTVA->Clear();
	this->txt_NomArticle->Clear();
	this->txt_Idart->Clear();
	this->txt_Refart->Clear();
	this->mode = "new";
	this->txt_message->Text = "Veuillez saisir les informations";
}
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "modify";
	this->txt_message->Text = "Veuillez remplacer les informations nécessaires";
}
private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "delete";
	this->txt_message->Text = "Etes-vous sur de vouloir supprimer cet article ?";
}
private: System::Void BtnEnregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "new") {
		int id_article;
		id_article = this->article->ajouter(Convert::ToInt32(this->txtPrixHT->Text), this->txt_Refart->Text, this->txt_NomArticle->Text, Convert::ToInt32(this->txtQuantitee->Text), this->txtNatureArticle->Text, this->txtCouleur->Text, Convert::ToInt32(this->txt_seuil->Text), Convert::ToInt32(this->TxtTauxTVA->Text));
		this->txt_message->Text = "L'ID généré est le :" + id_article;
	}
	else if (this->mode == "modify") {
		this->article->modifier(Convert::ToInt32(this->txt_Idart->Text),Convert::ToInt32(this->txtPrixHT->Text), this->txt_Refart->Text, this->txt_NomArticle->Text, Convert::ToInt32(this->txtQuantitee->Text), this->txtNatureArticle->Text, this->txtCouleur->Text, Convert::ToInt32(this->txt_seuil->Text), Convert::ToInt32(this->TxtTauxTVA->Text));
	}
	else if (this->mode == "delete") {
		this->article->supprimer(Convert::ToInt32(this->txt_Idart->Text));
	}
	this->loadData();
	this->txt_message->Text += "Traitement terminé.";
}
private: System::Void GestionStock_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ds = gcnew Data::DataSet();
	this->article = gcnew NS_services::CL_svc_gestionArticles();
	this->loadData();
}
private: void loadData(void) {
	this->ds->Clear();
	this->ds = this->article->listeArticle("liste");
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->DataSource = this->ds;
	this->dataGridView1->DataMember = "liste";
}
};
}