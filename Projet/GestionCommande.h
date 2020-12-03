#pragma once
#include "CL_svc_Commande.h"
#include "CL_svc_gestionArticles.h"
#include "CL_svc_personne.h"

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
	private: System::Windows::Forms::TextBox^ txt_IdClient;
	private: System::Windows::Forms::Label^ lbl_idclient;


	private: System::Windows::Forms::TextBox^ txtQuantitee;
	private: System::Windows::Forms::Label^ lblQuantite;
	private: System::Windows::Forms::TextBox^ txtNatureArticle;
	private: System::Windows::Forms::Label^ lblNature;
	private: System::Windows::Forms::TextBox^ TxtTauxTVA;
	private: System::Windows::Forms::Label^ lblTauxTVA;
	private: System::Windows::Forms::TextBox^ txtPrixHT;
	private: System::Windows::Forms::Label^ lblPrixHT;
	private: System::Windows::Forms::TextBox^ txt_prenom;

	private: System::Windows::Forms::Label^ lblPrenomClient;
	private: System::Windows::Forms::TextBox^ txt_nomclient;

	private: System::Windows::Forms::Label^ lblNomClient;


	private: System::Windows::Forms::Button^ BtnFin;
	private: System::Windows::Forms::Button^ BtnDebut;
	private: System::Windows::Forms::DataGridView^ dataGridView;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_month;
	private: System::Windows::Forms::TextBox^ txt_day;
	private: System::Windows::Forms::TextBox^ txt_year;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_new;
	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: Data::DataSet^ ds3;
	private: Data::DataSet^ ds4;
	private: Data::DataSet^ ds5;
	private: String^ mode;
	private: int index;
	private: int num;
	private: NS_services::CL_svc_Commande^ commande;
	private: NS_services::CL_svc_gestionArticles^ article;
	private: NS_services::CL_svc_personne^ personne;
	private: System::Windows::Forms::TextBox^ txt_idcommande;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_idarticle;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_ville;
	private: System::Windows::Forms::Label^ label6;

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
			this->txt_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idclient = (gcnew System::Windows::Forms::Label());
			this->txtQuantitee = (gcnew System::Windows::Forms::TextBox());
			this->lblQuantite = (gcnew System::Windows::Forms::Label());
			this->txtNatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->lblNature = (gcnew System::Windows::Forms::Label());
			this->TxtTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->lblTauxTVA = (gcnew System::Windows::Forms::Label());
			this->txtPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->lblPrixHT = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lblPrenomClient = (gcnew System::Windows::Forms::Label());
			this->txt_nomclient = (gcnew System::Windows::Forms::TextBox());
			this->lblNomClient = (gcnew System::Windows::Forms::Label());
			this->BtnFin = (gcnew System::Windows::Forms::Button());
			this->BtnDebut = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_month = (gcnew System::Windows::Forms::TextBox());
			this->txt_day = (gcnew System::Windows::Forms::TextBox());
			this->txt_year = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_new = (gcnew System::Windows::Forms::Button());
			this->txt_idcommande = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_idarticle = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(28, 564);
			this->txt_NomArticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(457, 22);
			this->txt_NomArticle->TabIndex = 43;
			// 
			// lbl_NomArticle
			// 
			this->lbl_NomArticle->AutoSize = true;
			this->lbl_NomArticle->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lbl_NomArticle->Location = System::Drawing::Point(28, 543);
			this->lbl_NomArticle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_NomArticle->Name = L"lbl_NomArticle";
			this->lbl_NomArticle->Size = System::Drawing::Size(105, 17);
			this->lbl_NomArticle->TabIndex = 42;
			this->lbl_NomArticle->Text = L"Nom de l\'article";
			// 
			// BtnEnregistrer
			// 
			this->BtnEnregistrer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnEnregistrer->Location = System::Drawing::Point(666, 642);
			this->BtnEnregistrer->Margin = System::Windows::Forms::Padding(4);
			this->BtnEnregistrer->Name = L"BtnEnregistrer";
			this->BtnEnregistrer->Size = System::Drawing::Size(241, 155);
			this->BtnEnregistrer->TabIndex = 36;
			this->BtnEnregistrer->Text = L"ENREGISTRER";
			this->BtnEnregistrer->UseVisualStyleBackColor = false;
			this->BtnEnregistrer->Click += gcnew System::EventHandler(this, &GestionCommande::BtnEnregistrer_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(565, 752);
			this->btn_suppr->Margin = System::Windows::Forms::Padding(4);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(93, 45);
			this->btn_suppr->TabIndex = 35;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = false;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &GestionCommande::btn_suppr_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(565, 700);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(93, 43);
			this->btn_modifier->TabIndex = 34;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &GestionCommande::btn_modifier_Click);
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(565, 641);
			this->Btn_Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(93, 45);
			this->Btn_Ajouter->TabIndex = 33;
			this->Btn_Ajouter->Text = L"Ajouter";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			this->Btn_Ajouter->Click += gcnew System::EventHandler(this, &GestionCommande::Btn_Ajouter_Click);
			// 
			// BtnSuivant
			// 
			this->BtnSuivant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnSuivant->Location = System::Drawing::Point(254, 185);
			this->BtnSuivant->Margin = System::Windows::Forms::Padding(4);
			this->BtnSuivant->Name = L"BtnSuivant";
			this->BtnSuivant->Size = System::Drawing::Size(159, 28);
			this->BtnSuivant->TabIndex = 32;
			this->BtnSuivant->Text = L"Suivant";
			this->BtnSuivant->UseVisualStyleBackColor = false;
			this->BtnSuivant->Click += gcnew System::EventHandler(this, &GestionCommande::BtnSuivant_Click);
			// 
			// Btn_Avant
			// 
			this->Btn_Avant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Avant->Location = System::Drawing::Point(61, 185);
			this->Btn_Avant->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Avant->Name = L"Btn_Avant";
			this->Btn_Avant->Size = System::Drawing::Size(185, 28);
			this->Btn_Avant->TabIndex = 31;
			this->Btn_Avant->Text = L"Précédent";
			this->Btn_Avant->UseVisualStyleBackColor = false;
			this->Btn_Avant->Click += gcnew System::EventHandler(this, &GestionCommande::Btn_Avant_Click);
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(510, 70);
			this->txt_message->Margin = System::Windows::Forms::Padding(4);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(599, 114);
			this->txt_message->TabIndex = 30;
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(995, 49);
			this->lbl_console->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(59, 17);
			this->lbl_console->TabIndex = 29;
			this->lbl_console->Text = L"Console";
			// 
			// txt_RefCommande
			// 
			this->txt_RefCommande->Location = System::Drawing::Point(28, 506);
			this->txt_RefCommande->Margin = System::Windows::Forms::Padding(4);
			this->txt_RefCommande->Name = L"txt_RefCommande";
			this->txt_RefCommande->Size = System::Drawing::Size(457, 22);
			this->txt_RefCommande->TabIndex = 28;
			// 
			// lbl_RefCommande
			// 
			this->lbl_RefCommande->AutoSize = true;
			this->lbl_RefCommande->Location = System::Drawing::Point(25, 485);
			this->lbl_RefCommande->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_RefCommande->Name = L"lbl_RefCommande";
			this->lbl_RefCommande->Size = System::Drawing::Size(182, 17);
			this->lbl_RefCommande->TabIndex = 27;
			this->lbl_RefCommande->Text = L"Référence de la commande";
			// 
			// txt_IdClient
			// 
			this->txt_IdClient->Location = System::Drawing::Point(28, 33);
			this->txt_IdClient->Margin = System::Windows::Forms::Padding(4);
			this->txt_IdClient->Name = L"txt_IdClient";
			this->txt_IdClient->Size = System::Drawing::Size(457, 22);
			this->txt_IdClient->TabIndex = 26;
			// 
			// lbl_idclient
			// 
			this->lbl_idclient->AutoSize = true;
			this->lbl_idclient->Location = System::Drawing::Point(37, 13);
			this->lbl_idclient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idclient->Name = L"lbl_idclient";
			this->lbl_idclient->Size = System::Drawing::Size(60, 17);
			this->lbl_idclient->TabIndex = 25;
			this->lbl_idclient->Text = L"ID Client";
			// 
			// txtQuantitee
			// 
			this->txtQuantitee->Location = System::Drawing::Point(28, 658);
			this->txtQuantitee->Margin = System::Windows::Forms::Padding(4);
			this->txtQuantitee->Name = L"txtQuantitee";
			this->txtQuantitee->Size = System::Drawing::Size(457, 22);
			this->txtQuantitee->TabIndex = 47;
			// 
			// lblQuantite
			// 
			this->lblQuantite->AutoSize = true;
			this->lblQuantite->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblQuantite->Location = System::Drawing::Point(28, 637);
			this->lblQuantite->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblQuantite->Name = L"lblQuantite";
			this->lblQuantite->Size = System::Drawing::Size(70, 17);
			this->lblQuantite->TabIndex = 46;
			this->lblQuantite->Text = L"Quantitée";
			// 
			// txtNatureArticle
			// 
			this->txtNatureArticle->Location = System::Drawing::Point(28, 611);
			this->txtNatureArticle->Margin = System::Windows::Forms::Padding(4);
			this->txtNatureArticle->Name = L"txtNatureArticle";
			this->txtNatureArticle->Size = System::Drawing::Size(457, 22);
			this->txtNatureArticle->TabIndex = 45;
			// 
			// lblNature
			// 
			this->lblNature->AutoSize = true;
			this->lblNature->Location = System::Drawing::Point(25, 590);
			this->lblNature->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNature->Name = L"lblNature";
			this->lblNature->Size = System::Drawing::Size(119, 17);
			this->lblNature->TabIndex = 44;
			this->lblNature->Text = L"Nature de l\'article";
			// 
			// TxtTauxTVA
			// 
			this->TxtTauxTVA->Location = System::Drawing::Point(28, 752);
			this->TxtTauxTVA->Margin = System::Windows::Forms::Padding(4);
			this->TxtTauxTVA->Name = L"TxtTauxTVA";
			this->TxtTauxTVA->Size = System::Drawing::Size(457, 22);
			this->TxtTauxTVA->TabIndex = 51;
			// 
			// lblTauxTVA
			// 
			this->lblTauxTVA->AutoSize = true;
			this->lblTauxTVA->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblTauxTVA->Location = System::Drawing::Point(27, 731);
			this->lblTauxTVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTauxTVA->Name = L"lblTauxTVA";
			this->lblTauxTVA->Size = System::Drawing::Size(70, 17);
			this->lblTauxTVA->TabIndex = 50;
			this->lblTauxTVA->Text = L"Taux TVA";
			// 
			// txtPrixHT
			// 
			this->txtPrixHT->Location = System::Drawing::Point(31, 705);
			this->txtPrixHT->Margin = System::Windows::Forms::Padding(4);
			this->txtPrixHT->Name = L"txtPrixHT";
			this->txtPrixHT->Size = System::Drawing::Size(457, 22);
			this->txtPrixHT->TabIndex = 49;
			// 
			// lblPrixHT
			// 
			this->lblPrixHT->AutoSize = true;
			this->lblPrixHT->Location = System::Drawing::Point(28, 684);
			this->lblPrixHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrixHT->Name = L"lblPrixHT";
			this->lblPrixHT->Size = System::Drawing::Size(54, 17);
			this->lblPrixHT->TabIndex = 48;
			this->lblPrixHT->Text = L"Prix HT";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(28, 155);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(457, 22);
			this->txt_prenom->TabIndex = 55;
			// 
			// lblPrenomClient
			// 
			this->lblPrenomClient->AutoSize = true;
			this->lblPrenomClient->Location = System::Drawing::Point(37, 135);
			this->lblPrenomClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPrenomClient->Name = L"lblPrenomClient";
			this->lblPrenomClient->Size = System::Drawing::Size(96, 17);
			this->lblPrenomClient->TabIndex = 54;
			this->lblPrenomClient->Text = L"Prénom Client";
			// 
			// txt_nomclient
			// 
			this->txt_nomclient->Location = System::Drawing::Point(28, 96);
			this->txt_nomclient->Margin = System::Windows::Forms::Padding(4);
			this->txt_nomclient->Name = L"txt_nomclient";
			this->txt_nomclient->ReadOnly = true;
			this->txt_nomclient->Size = System::Drawing::Size(457, 22);
			this->txt_nomclient->TabIndex = 53;
			// 
			// lblNomClient
			// 
			this->lblNomClient->AutoSize = true;
			this->lblNomClient->Location = System::Drawing::Point(37, 70);
			this->lblNomClient->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNomClient->Name = L"lblNomClient";
			this->lblNomClient->Size = System::Drawing::Size(76, 17);
			this->lblNomClient->TabIndex = 52;
			this->lblNomClient->Text = L"Nom Client";
			// 
			// BtnFin
			// 
			this->BtnFin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnFin->Location = System::Drawing::Point(254, 221);
			this->BtnFin->Margin = System::Windows::Forms::Padding(4);
			this->BtnFin->Name = L"BtnFin";
			this->BtnFin->Size = System::Drawing::Size(159, 28);
			this->BtnFin->TabIndex = 84;
			this->BtnFin->Text = L"Fin";
			this->BtnFin->UseVisualStyleBackColor = false;
			this->BtnFin->Click += gcnew System::EventHandler(this, &GestionCommande::BtnFin_Click);
			// 
			// BtnDebut
			// 
			this->BtnDebut->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDebut->Location = System::Drawing::Point(61, 221);
			this->BtnDebut->Margin = System::Windows::Forms::Padding(4);
			this->BtnDebut->Name = L"BtnDebut";
			this->BtnDebut->Size = System::Drawing::Size(185, 28);
			this->BtnDebut->TabIndex = 83;
			this->BtnDebut->Text = L"Début";
			this->BtnDebut->UseVisualStyleBackColor = false;
			this->BtnDebut->Click += gcnew System::EventHandler(this, &GestionCommande::BtnDebut_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(510, 221);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(620, 378);
			this->dataGridView->TabIndex = 85;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(61, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 36);
			this->button1->TabIndex = 86;
			this->button1->Text = L"Afficher toutes les commandes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GestionCommande::button1_Click);
			// 
			// txt_month
			// 
			this->txt_month->Location = System::Drawing::Point(90, 329);
			this->txt_month->Margin = System::Windows::Forms::Padding(4);
			this->txt_month->Name = L"txt_month";
			this->txt_month->Size = System::Drawing::Size(51, 22);
			this->txt_month->TabIndex = 87;
			// 
			// txt_day
			// 
			this->txt_day->Location = System::Drawing::Point(31, 329);
			this->txt_day->Margin = System::Windows::Forms::Padding(4);
			this->txt_day->Name = L"txt_day";
			this->txt_day->Size = System::Drawing::Size(51, 22);
			this->txt_day->TabIndex = 88;
			// 
			// txt_year
			// 
			this->txt_year->Location = System::Drawing::Point(149, 329);
			this->txt_year->Margin = System::Windows::Forms::Padding(4);
			this->txt_year->Name = L"txt_year";
			this->txt_year->Size = System::Drawing::Size(51, 22);
			this->txt_year->TabIndex = 89;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(151, 308);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 90;
			this->label1->Text = L"Année";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(94, 308);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 91;
			this->label2->Text = L"Mois";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 308);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 17);
			this->label3->TabIndex = 92;
			this->label3->Text = L"Jour";
			// 
			// btn_new
			// 
			this->btn_new->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_new->Location = System::Drawing::Point(61, 392);
			this->btn_new->Name = L"btn_new";
			this->btn_new->Size = System::Drawing::Size(352, 36);
			this->btn_new->TabIndex = 93;
			this->btn_new->Text = L"Nouvelle commande";
			this->btn_new->UseVisualStyleBackColor = false;
			this->btn_new->Click += gcnew System::EventHandler(this, &GestionCommande::btn_new_Click);
			// 
			// txt_idcommande
			// 
			this->txt_idcommande->Location = System::Drawing::Point(31, 459);
			this->txt_idcommande->Margin = System::Windows::Forms::Padding(4);
			this->txt_idcommande->Name = L"txt_idcommande";
			this->txt_idcommande->Size = System::Drawing::Size(457, 22);
			this->txt_idcommande->TabIndex = 94;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 438);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 17);
			this->label4->TabIndex = 95;
			this->label4->Text = L"Id commande";
			// 
			// txt_idarticle
			// 
			this->txt_idarticle->Location = System::Drawing::Point(28, 801);
			this->txt_idarticle->Margin = System::Windows::Forms::Padding(4);
			this->txt_idarticle->Name = L"txt_idarticle";
			this->txt_idarticle->Size = System::Drawing::Size(457, 22);
			this->txt_idarticle->TabIndex = 96;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Location = System::Drawing::Point(28, 780);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 17);
			this->label5->TabIndex = 97;
			this->label5->Text = L"Id article";
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(306, 329);
			this->txt_ville->Margin = System::Windows::Forms::Padding(4);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(107, 22);
			this->txt_ville->TabIndex = 98;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(303, 308);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 17);
			this->label6->TabIndex = 99;
			this->label6->Text = L"Ville de livraison";
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1191, 830);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_idarticle);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_idcommande);
			this->Controls->Add(this->btn_new);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_year);
			this->Controls->Add(this->txt_day);
			this->Controls->Add(this->txt_month);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->BtnFin);
			this->Controls->Add(this->BtnDebut);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->lblPrenomClient);
			this->Controls->Add(this->txt_nomclient);
			this->Controls->Add(this->lblNomClient);
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
			this->Controls->Add(this->txt_IdClient);
			this->Controls->Add(this->lbl_idclient);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionCommande";
			this->Text = L"GestionCommande";
			this->Load += gcnew System::EventHandler(this, &GestionCommande::GestionCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void BtnSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ds = this->personne->listeClient("liste");
	if (this->index < this->ds->Tables["liste"]->Rows->Count - 1) {
		this->index++;
		this->loadData(this->index);
		this->loadData5();
		this->txt_message->Text = "Element n°:" + (this->index + 1);
	}
}
private: System::Void Btn_Avant_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->index > 0) {
		this->ds = this->personne->listeClient("liste");
		this->index--;
		this->loadData(this->index);
		this->loadData5();
		this->txt_message->Text = "Element n°:" + (this->index + 1);
	}
}
private: System::Void BtnDebut_Click(System::Object^ sender, System::EventArgs^ e) {
	this->index = 0;
	this->loadData(this->index);
	this->loadData5();
	this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
}
private: System::Void BtnFin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ds = this->personne->listeClient("liste");
	this->index = this->ds->Tables["liste"]->Rows->Count - 1;
	this->loadData(this->index);
	this->loadData5();
	this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->loadData2();
}
private: System::Void Btn_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode = "new";
	this->loadData4();
}
private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_suppr_Click(System::Object^ sender, System::EventArgs^ e) {
	this->loadData3();
	this->txt_message->Text = "Choisissez l'ID de l'article à supprimer";
	this->mode = "delete";
}
private: System::Void BtnEnregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "new") {
		this->commande->ajouterC(Convert::ToInt32(this->txt_IdClient->Text),Convert::ToInt32(this->txt_idarticle->Text),this->txt_RefCommande->Text, this->txt_idarticle->Text, this->txt_NomArticle->Text, this->txtNatureArticle->Text, Convert::ToInt32(this->TxtTauxTVA->Text), Convert::ToInt32(this->txtQuantitee->Text), Convert::ToInt32(this->txtPrixHT->Text));
		this->loadData3();
	}
}
private: System::Void btn_new_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ reference;
	if ((this->txt_ville->Text != "") && (this->txt_year->Text != ""))
	{
		reference += this->txt_prenom->Text->Substring(0, 2);
		reference += this->txt_nomclient->Text->Substring(0, 2);
		reference += this->txt_year->Text->Substring(0, 4);
		reference += this->txt_ville->Text->Substring(0, 3);
		reference += Convert::ToString(this->num);
		this->txt_RefCommande->Text = reference;
	}
	else {
		this->txt_message->Text = "Veuillez remplir les champs Ville et Année avant de créer une nouvelle commande";
	}
}
private: System::Void GestionCommande_Load(System::Object^ sender, System::EventArgs^ e) {
	this->index = 0;
	this->mode = "RIEN";
	this->num = 0;
	this->ds = gcnew Data::DataSet();
	this->ds2 = gcnew Data::DataSet();
	this->ds3 = gcnew Data::DataSet();
	this->ds4 = gcnew Data::DataSet();
	this->ds5 = gcnew Data::DataSet();
	this->personne = gcnew NS_services::CL_svc_personne();
	this->commande = gcnew NS_services::CL_svc_Commande();
	this->article = gcnew NS_services::CL_svc_gestionArticles();
	this->loadData(this->index);
	this->loadData5();
	this->txt_message->Text = "Data chargées";
}
private: void loadData(int index) {
	this->ds->Clear();
	this->ds = this->personne->listeClient("liste");
	this->txt_IdClient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
	this->txt_nomclient->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
}
private: void loadData2(void) {
	this->ds2->Clear();
	this->ds2 = this->commande->listeCommandeClient(Convert::ToInt32(this->txt_IdClient->Text), "toutecommande");
	this->dataGridView->Columns->Clear();
	this->dataGridView->DataSource = this->ds2;
	this->dataGridView->DataMember = "toutecommande";
}
private: void loadData3() {
	this->ds3->Clear();
	this->ds3 = this->commande->listeCommande(this->txt_RefCommande->Text, "list");
	this->dataGridView->Columns->Clear();
	this->dataGridView->DataSource = this->ds3;
	this->dataGridView->DataMember = "list";
}
private: void loadData4() {
	this->ds4->Clear();
	this->ds4 = this->article->listeArticle("article");
	this->dataGridView->Columns->Clear();
	this->dataGridView->DataSource = this->ds4;
	this->dataGridView->DataMember = "article";
}
private: void loadData5() {
	this->ds5->Clear();
	this->ds5 = this->personne->listeAdrC(Convert::ToInt32(this->txt_IdClient->Text), "listeadr");
	this->dataGridView->Columns->Clear();
	this->dataGridView->DataSource = this->ds5;
	this->dataGridView->DataMember = "listeadr";
}
};
}