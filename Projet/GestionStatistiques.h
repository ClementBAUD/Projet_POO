#pragma once

namespace CL_GestionStatistique {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStatistiques
	/// </summary>
	public ref class GestionStatistiques : public System::Windows::Forms::Form
	{
	public:
		GestionStatistiques(void)
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
		~GestionStatistiques()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::DataGridView^ dataGridViewAffich;


	private: System::Windows::Forms::TextBox^ txt_NomArticle;
	private: System::Windows::Forms::Label^ lblValAchat;
	private: System::Windows::Forms::TextBox^ txt_RefCommande;
	private: System::Windows::Forms::Label^ lbl_ValComm;
	private: System::Windows::Forms::Label^ lblSelectClient;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblPrenomClient;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ lblNomClient;
	private: System::Windows::Forms::TextBox^ txt_IdClient;
	private: System::Windows::Forms::Label^ lbl_idclient;
	private: System::Windows::Forms::TextBox^ txtPanierMoyen;

	private: System::Windows::Forms::Label^ lblPanierMoy;
	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ Btn_Ajouter;
	private: System::Windows::Forms::TextBox^ txtMontantTotal;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnTVA3;
	private: System::Windows::Forms::Button^ BtnTVA2;
	private: System::Windows::Forms::Button^ BtnTVA1;
	private: System::Windows::Forms::Button^ btnMargeComm15;
	private: System::Windows::Forms::Button^ BtnMargeComm10;
	private: System::Windows::Forms::Button^ btnMargeCom5;
	private: System::Windows::Forms::Button^ BtnDemInco5;
	private: System::Windows::Forms::Button^ BtnDemInco3;
	private: System::Windows::Forms::Button^ BtnDemarqInco2;
	private: System::Windows::Forms::Button^ BtnRemiseComm15;
	private: System::Windows::Forms::Button^ BtnRemiseComm10;
	private: System::Windows::Forms::Button^ btnRemiseComm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Btnjanvier;
	private: System::Windows::Forms::Button^ BtnFevrier;
	private: System::Windows::Forms::Button^ BtnMars;
	private: System::Windows::Forms::Button^ BtnAvril;
	private: System::Windows::Forms::Button^ BtnAout;
	private: System::Windows::Forms::Button^ BtnJuillet;
	private: System::Windows::Forms::Button^ BtnJuin;
	private: System::Windows::Forms::Button^ BtnMai;
	private: System::Windows::Forms::Button^ BtnDecembre;
	private: System::Windows::Forms::Button^ BtnNov;
	private: System::Windows::Forms::Button^ BtnOctobre;
	private: System::Windows::Forms::Button^ BtnSeptembre;

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
			this->dataGridViewAffich = (gcnew System::Windows::Forms::DataGridView());
			this->txt_NomArticle = (gcnew System::Windows::Forms::TextBox());
			this->lblValAchat = (gcnew System::Windows::Forms::Label());
			this->txt_RefCommande = (gcnew System::Windows::Forms::TextBox());
			this->lbl_ValComm = (gcnew System::Windows::Forms::Label());
			this->lblSelectClient = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblPrenomClient = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->lblNomClient = (gcnew System::Windows::Forms::Label());
			this->txt_IdClient = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idclient = (gcnew System::Windows::Forms::Label());
			this->txtPanierMoyen = (gcnew System::Windows::Forms::TextBox());
			this->lblPanierMoy = (gcnew System::Windows::Forms::Label());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->Btn_Ajouter = (gcnew System::Windows::Forms::Button());
			this->txtMontantTotal = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnTVA3 = (gcnew System::Windows::Forms::Button());
			this->BtnTVA2 = (gcnew System::Windows::Forms::Button());
			this->BtnTVA1 = (gcnew System::Windows::Forms::Button());
			this->btnMargeComm15 = (gcnew System::Windows::Forms::Button());
			this->BtnMargeComm10 = (gcnew System::Windows::Forms::Button());
			this->btnMargeCom5 = (gcnew System::Windows::Forms::Button());
			this->BtnDemInco5 = (gcnew System::Windows::Forms::Button());
			this->BtnDemInco3 = (gcnew System::Windows::Forms::Button());
			this->BtnDemarqInco2 = (gcnew System::Windows::Forms::Button());
			this->BtnRemiseComm15 = (gcnew System::Windows::Forms::Button());
			this->BtnRemiseComm10 = (gcnew System::Windows::Forms::Button());
			this->btnRemiseComm = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Btnjanvier = (gcnew System::Windows::Forms::Button());
			this->BtnFevrier = (gcnew System::Windows::Forms::Button());
			this->BtnMars = (gcnew System::Windows::Forms::Button());
			this->BtnAvril = (gcnew System::Windows::Forms::Button());
			this->BtnAout = (gcnew System::Windows::Forms::Button());
			this->BtnJuillet = (gcnew System::Windows::Forms::Button());
			this->BtnJuin = (gcnew System::Windows::Forms::Button());
			this->BtnMai = (gcnew System::Windows::Forms::Button());
			this->BtnDecembre = (gcnew System::Windows::Forms::Button());
			this->BtnNov = (gcnew System::Windows::Forms::Button());
			this->BtnOctobre = (gcnew System::Windows::Forms::Button());
			this->BtnSeptembre = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAffich))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewAffich
			// 
			this->dataGridViewAffich->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAffich->Location = System::Drawing::Point(12, 25);
			this->dataGridViewAffich->Name = L"dataGridViewAffich";
			this->dataGridViewAffich->Size = System::Drawing::Size(368, 671);
			this->dataGridViewAffich->TabIndex = 65;
			// 
			// txt_NomArticle
			// 
			this->txt_NomArticle->Location = System::Drawing::Point(625, 343);
			this->txt_NomArticle->Name = L"txt_NomArticle";
			this->txt_NomArticle->Size = System::Drawing::Size(344, 20);
			this->txt_NomArticle->TabIndex = 69;
			// 
			// lblValAchat
			// 
			this->lblValAchat->AutoSize = true;
			this->lblValAchat->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblValAchat->Location = System::Drawing::Point(632, 327);
			this->lblValAchat->Name = L"lblValAchat";
			this->lblValAchat->Size = System::Drawing::Size(119, 13);
			this->lblValAchat->TabIndex = 68;
			this->lblValAchat->Text = L"Valeur d\'achat du stock";
			// 
			// txt_RefCommande
			// 
			this->txt_RefCommande->Location = System::Drawing::Point(625, 399);
			this->txt_RefCommande->Name = L"txt_RefCommande";
			this->txt_RefCommande->Size = System::Drawing::Size(344, 20);
			this->txt_RefCommande->TabIndex = 67;
			// 
			// lbl_ValComm
			// 
			this->lbl_ValComm->AutoSize = true;
			this->lbl_ValComm->Location = System::Drawing::Point(632, 383);
			this->lbl_ValComm->Name = L"lbl_ValComm";
			this->lbl_ValComm->Size = System::Drawing::Size(137, 13);
			this->lbl_ValComm->TabIndex = 66;
			this->lbl_ValComm->Text = L"Valeur commercial du stock";
			// 
			// lblSelectClient
			// 
			this->lblSelectClient->AutoSize = true;
			this->lblSelectClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSelectClient->Location = System::Drawing::Point(1098, 25);
			this->lblSelectClient->Name = L"lblSelectClient";
			this->lblSelectClient->Size = System::Drawing::Size(292, 24);
			this->lblSelectClient->TabIndex = 106;
			this->lblSelectClient->Text = L"Veuillez selectionner un client";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(1271, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 105;
			this->button1->Text = L"Fin";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(1126, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 23);
			this->button2->TabIndex = 104;
			this->button2->Text = L"Début";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Location = System::Drawing::Point(1271, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 103;
			this->button3->Text = L"Suivant";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->Location = System::Drawing::Point(1126, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 23);
			this->button4->TabIndex = 102;
			this->button4->Text = L"Précédent";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1092, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(344, 20);
			this->textBox1->TabIndex = 101;
			// 
			// lblPrenomClient
			// 
			this->lblPrenomClient->AutoSize = true;
			this->lblPrenomClient->Location = System::Drawing::Point(1099, 171);
			this->lblPrenomClient->Name = L"lblPrenomClient";
			this->lblPrenomClient->Size = System::Drawing::Size(72, 13);
			this->lblPrenomClient->TabIndex = 100;
			this->lblPrenomClient->Text = L"Prénom Client";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1092, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(344, 20);
			this->textBox2->TabIndex = 99;
			// 
			// lblNomClient
			// 
			this->lblNomClient->AutoSize = true;
			this->lblNomClient->Location = System::Drawing::Point(1099, 118);
			this->lblNomClient->Name = L"lblNomClient";
			this->lblNomClient->Size = System::Drawing::Size(58, 13);
			this->lblNomClient->TabIndex = 98;
			this->lblNomClient->Text = L"Nom Client";
			// 
			// txt_IdClient
			// 
			this->txt_IdClient->Location = System::Drawing::Point(1092, 88);
			this->txt_IdClient->Name = L"txt_IdClient";
			this->txt_IdClient->Size = System::Drawing::Size(344, 20);
			this->txt_IdClient->TabIndex = 97;
			// 
			// lbl_idclient
			// 
			this->lbl_idclient->AutoSize = true;
			this->lbl_idclient->Location = System::Drawing::Point(1099, 72);
			this->lbl_idclient->Name = L"lbl_idclient";
			this->lbl_idclient->Size = System::Drawing::Size(47, 13);
			this->lbl_idclient->TabIndex = 96;
			this->lbl_idclient->Text = L"ID Client";
			// 
			// txtPanierMoyen
			// 
			this->txtPanierMoyen->Location = System::Drawing::Point(1076, 332);
			this->txtPanierMoyen->Name = L"txtPanierMoyen";
			this->txtPanierMoyen->Size = System::Drawing::Size(344, 20);
			this->txtPanierMoyen->TabIndex = 108;
			// 
			// lblPanierMoy
			// 
			this->lblPanierMoy->AutoSize = true;
			this->lblPanierMoy->Location = System::Drawing::Point(1083, 316);
			this->lblPanierMoy->Name = L"lblPanierMoy";
			this->lblPanierMoy->Size = System::Drawing::Size(72, 13);
			this->lblPanierMoy->TabIndex = 107;
			this->lblPanierMoy->Text = L"Panier Moyen";
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(402, 199);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(159, 60);
			this->btn_suppr->TabIndex = 112;
			this->btn_suppr->Text = L"les 10 articles les plus vendus";
			this->btn_suppr->UseVisualStyleBackColor = false;
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(402, 292);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(159, 60);
			this->btn_modifier->TabIndex = 111;
			this->btn_modifier->Text = L"Les 10 Articles les moins vendus";
			this->btn_modifier->UseVisualStyleBackColor = false;
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(402, 387);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(159, 60);
			this->Btn_Ajouter->TabIndex = 110;
			this->Btn_Ajouter->Text = L"Produits sous le seuil de réapprovisionnement";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			// 
			// txtMontantTotal
			// 
			this->txtMontantTotal->Location = System::Drawing::Point(1076, 409);
			this->txtMontantTotal->Name = L"txtMontantTotal";
			this->txtMontantTotal->Size = System::Drawing::Size(344, 20);
			this->txtMontantTotal->TabIndex = 114;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1083, 393);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 13);
			this->label3->TabIndex = 113;
			this->label3->Text = L"Montal total des achats";
			// 
			// btnTVA3
			// 
			this->btnTVA3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnTVA3->Location = System::Drawing::Point(882, 440);
			this->btnTVA3->Name = L"btnTVA3";
			this->btnTVA3->Size = System::Drawing::Size(135, 35);
			this->btnTVA3->TabIndex = 118;
			this->btnTVA3->Text = L"TVA3";
			this->btnTVA3->UseVisualStyleBackColor = false;
			// 
			// BtnTVA2
			// 
			this->BtnTVA2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnTVA2->Location = System::Drawing::Point(757, 440);
			this->BtnTVA2->Name = L"BtnTVA2";
			this->BtnTVA2->Size = System::Drawing::Size(135, 35);
			this->BtnTVA2->TabIndex = 116;
			this->BtnTVA2->Text = L"TVA2";
			this->BtnTVA2->UseVisualStyleBackColor = false;
			// 
			// BtnTVA1
			// 
			this->BtnTVA1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnTVA1->Location = System::Drawing::Point(612, 440);
			this->BtnTVA1->Name = L"BtnTVA1";
			this->BtnTVA1->Size = System::Drawing::Size(155, 35);
			this->BtnTVA1->TabIndex = 115;
			this->BtnTVA1->Text = L"TVA1";
			this->BtnTVA1->UseVisualStyleBackColor = false;
			// 
			// btnMargeComm15
			// 
			this->btnMargeComm15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnMargeComm15->Location = System::Drawing::Point(882, 492);
			this->btnMargeComm15->Name = L"btnMargeComm15";
			this->btnMargeComm15->Size = System::Drawing::Size(135, 35);
			this->btnMargeComm15->TabIndex = 121;
			this->btnMargeComm15->Text = L"Marge Commerciale 15%";
			this->btnMargeComm15->UseVisualStyleBackColor = false;
			// 
			// BtnMargeComm10
			// 
			this->BtnMargeComm10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnMargeComm10->Location = System::Drawing::Point(757, 492);
			this->BtnMargeComm10->Name = L"BtnMargeComm10";
			this->BtnMargeComm10->Size = System::Drawing::Size(135, 35);
			this->BtnMargeComm10->TabIndex = 120;
			this->BtnMargeComm10->Text = L"Marge Commerciale 10%";
			this->BtnMargeComm10->UseVisualStyleBackColor = false;
			// 
			// btnMargeCom5
			// 
			this->btnMargeCom5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnMargeCom5->Location = System::Drawing::Point(612, 492);
			this->btnMargeCom5->Name = L"btnMargeCom5";
			this->btnMargeCom5->Size = System::Drawing::Size(155, 35);
			this->btnMargeCom5->TabIndex = 119;
			this->btnMargeCom5->Text = L"Marge Commerciale 5%";
			this->btnMargeCom5->UseVisualStyleBackColor = false;
			// 
			// BtnDemInco5
			// 
			this->BtnDemInco5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDemInco5->Location = System::Drawing::Point(882, 592);
			this->BtnDemInco5->Name = L"BtnDemInco5";
			this->BtnDemInco5->Size = System::Drawing::Size(135, 35);
			this->BtnDemInco5->TabIndex = 127;
			this->BtnDemInco5->Text = L"Démarque 5%";
			this->BtnDemInco5->UseVisualStyleBackColor = false;
			// 
			// BtnDemInco3
			// 
			this->BtnDemInco3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDemInco3->Location = System::Drawing::Point(757, 592);
			this->BtnDemInco3->Name = L"BtnDemInco3";
			this->BtnDemInco3->Size = System::Drawing::Size(135, 35);
			this->BtnDemInco3->TabIndex = 126;
			this->BtnDemInco3->Text = L"Démarque 3%";
			this->BtnDemInco3->UseVisualStyleBackColor = false;
			// 
			// BtnDemarqInco2
			// 
			this->BtnDemarqInco2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDemarqInco2->Location = System::Drawing::Point(612, 592);
			this->BtnDemarqInco2->Name = L"BtnDemarqInco2";
			this->BtnDemarqInco2->Size = System::Drawing::Size(155, 35);
			this->BtnDemarqInco2->TabIndex = 125;
			this->BtnDemarqInco2->Text = L"Démarque 2%";
			this->BtnDemarqInco2->UseVisualStyleBackColor = false;
			// 
			// BtnRemiseComm15
			// 
			this->BtnRemiseComm15->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnRemiseComm15->Location = System::Drawing::Point(882, 540);
			this->BtnRemiseComm15->Name = L"BtnRemiseComm15";
			this->BtnRemiseComm15->Size = System::Drawing::Size(135, 35);
			this->BtnRemiseComm15->TabIndex = 124;
			this->BtnRemiseComm15->Text = L"Remise Commerciale 15%";
			this->BtnRemiseComm15->UseVisualStyleBackColor = false;
			// 
			// BtnRemiseComm10
			// 
			this->BtnRemiseComm10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnRemiseComm10->Location = System::Drawing::Point(757, 540);
			this->BtnRemiseComm10->Name = L"BtnRemiseComm10";
			this->BtnRemiseComm10->Size = System::Drawing::Size(135, 35);
			this->BtnRemiseComm10->TabIndex = 123;
			this->BtnRemiseComm10->Text = L"Remise Commerciale 10%";
			this->BtnRemiseComm10->UseVisualStyleBackColor = false;
			// 
			// btnRemiseComm
			// 
			this->btnRemiseComm->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnRemiseComm->Location = System::Drawing::Point(612, 540);
			this->btnRemiseComm->Name = L"btnRemiseComm";
			this->btnRemiseComm->Size = System::Drawing::Size(155, 35);
			this->btnRemiseComm->TabIndex = 122;
			this->btnRemiseComm->Text = L"Remise Commerciale 5%";
			this->btnRemiseComm->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(630, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 24);
			this->label1->TabIndex = 130;
			this->label1->Text = L"Veuillez selectionner un mois";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(625, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(344, 20);
			this->textBox3->TabIndex = 129;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(632, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 128;
			this->label2->Text = L"Chiffre d\'affaire ";
			// 
			// Btnjanvier
			// 
			this->Btnjanvier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btnjanvier->Location = System::Drawing::Point(625, 60);
			this->Btnjanvier->Name = L"Btnjanvier";
			this->Btnjanvier->Size = System::Drawing::Size(87, 35);
			this->Btnjanvier->TabIndex = 131;
			this->Btnjanvier->Text = L"Janvier";
			this->Btnjanvier->UseVisualStyleBackColor = false;
			// 
			// BtnFevrier
			// 
			this->BtnFevrier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnFevrier->Location = System::Drawing::Point(718, 61);
			this->BtnFevrier->Name = L"BtnFevrier";
			this->BtnFevrier->Size = System::Drawing::Size(87, 35);
			this->BtnFevrier->TabIndex = 132;
			this->BtnFevrier->Text = L"Fevrier";
			this->BtnFevrier->UseVisualStyleBackColor = false;
			// 
			// BtnMars
			// 
			this->BtnMars->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnMars->Location = System::Drawing::Point(811, 61);
			this->BtnMars->Name = L"BtnMars";
			this->BtnMars->Size = System::Drawing::Size(87, 35);
			this->BtnMars->TabIndex = 133;
			this->BtnMars->Text = L"Mars";
			this->BtnMars->UseVisualStyleBackColor = false;
			// 
			// BtnAvril
			// 
			this->BtnAvril->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnAvril->Location = System::Drawing::Point(904, 61);
			this->BtnAvril->Name = L"BtnAvril";
			this->BtnAvril->Size = System::Drawing::Size(87, 35);
			this->BtnAvril->TabIndex = 134;
			this->BtnAvril->Text = L"Avril";
			this->BtnAvril->UseVisualStyleBackColor = false;
			// 
			// BtnAout
			// 
			this->BtnAout->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnAout->Location = System::Drawing::Point(904, 107);
			this->BtnAout->Name = L"BtnAout";
			this->BtnAout->Size = System::Drawing::Size(87, 35);
			this->BtnAout->TabIndex = 138;
			this->BtnAout->Text = L"Août";
			this->BtnAout->UseVisualStyleBackColor = false;
			// 
			// BtnJuillet
			// 
			this->BtnJuillet->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnJuillet->Location = System::Drawing::Point(811, 107);
			this->BtnJuillet->Name = L"BtnJuillet";
			this->BtnJuillet->Size = System::Drawing::Size(87, 35);
			this->BtnJuillet->TabIndex = 137;
			this->BtnJuillet->Text = L"Juillet";
			this->BtnJuillet->UseVisualStyleBackColor = false;
			// 
			// BtnJuin
			// 
			this->BtnJuin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnJuin->Location = System::Drawing::Point(718, 107);
			this->BtnJuin->Name = L"BtnJuin";
			this->BtnJuin->Size = System::Drawing::Size(87, 35);
			this->BtnJuin->TabIndex = 136;
			this->BtnJuin->Text = L"Juin";
			this->BtnJuin->UseVisualStyleBackColor = false;
			// 
			// BtnMai
			// 
			this->BtnMai->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnMai->Location = System::Drawing::Point(625, 106);
			this->BtnMai->Name = L"BtnMai";
			this->BtnMai->Size = System::Drawing::Size(87, 35);
			this->BtnMai->TabIndex = 135;
			this->BtnMai->Text = L"Mai";
			this->BtnMai->UseVisualStyleBackColor = false;
			// 
			// BtnDecembre
			// 
			this->BtnDecembre->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDecembre->Location = System::Drawing::Point(904, 148);
			this->BtnDecembre->Name = L"BtnDecembre";
			this->BtnDecembre->Size = System::Drawing::Size(87, 35);
			this->BtnDecembre->TabIndex = 142;
			this->BtnDecembre->Text = L"Décembre";
			this->BtnDecembre->UseVisualStyleBackColor = false;
			// 
			// BtnNov
			// 
			this->BtnNov->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnNov->Location = System::Drawing::Point(811, 148);
			this->BtnNov->Name = L"BtnNov";
			this->BtnNov->Size = System::Drawing::Size(87, 35);
			this->BtnNov->TabIndex = 141;
			this->BtnNov->Text = L"Novembre";
			this->BtnNov->UseVisualStyleBackColor = false;
			// 
			// BtnOctobre
			// 
			this->BtnOctobre->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnOctobre->Location = System::Drawing::Point(718, 148);
			this->BtnOctobre->Name = L"BtnOctobre";
			this->BtnOctobre->Size = System::Drawing::Size(87, 35);
			this->BtnOctobre->TabIndex = 140;
			this->BtnOctobre->Text = L"Octobre";
			this->BtnOctobre->UseVisualStyleBackColor = false;
			// 
			// BtnSeptembre
			// 
			this->BtnSeptembre->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnSeptembre->Location = System::Drawing::Point(625, 147);
			this->BtnSeptembre->Name = L"BtnSeptembre";
			this->BtnSeptembre->Size = System::Drawing::Size(87, 35);
			this->BtnSeptembre->TabIndex = 139;
			this->BtnSeptembre->Text = L"Septembre";
			this->BtnSeptembre->UseVisualStyleBackColor = false;
			// 
			// GestionStatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1463, 725);
			this->Controls->Add(this->BtnDecembre);
			this->Controls->Add(this->BtnNov);
			this->Controls->Add(this->BtnOctobre);
			this->Controls->Add(this->BtnSeptembre);
			this->Controls->Add(this->BtnAout);
			this->Controls->Add(this->BtnJuillet);
			this->Controls->Add(this->BtnJuin);
			this->Controls->Add(this->BtnMai);
			this->Controls->Add(this->BtnAvril);
			this->Controls->Add(this->BtnMars);
			this->Controls->Add(this->BtnFevrier);
			this->Controls->Add(this->Btnjanvier);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BtnDemInco5);
			this->Controls->Add(this->BtnDemInco3);
			this->Controls->Add(this->BtnDemarqInco2);
			this->Controls->Add(this->BtnRemiseComm15);
			this->Controls->Add(this->BtnRemiseComm10);
			this->Controls->Add(this->btnRemiseComm);
			this->Controls->Add(this->btnMargeComm15);
			this->Controls->Add(this->BtnMargeComm10);
			this->Controls->Add(this->btnMargeCom5);
			this->Controls->Add(this->btnTVA3);
			this->Controls->Add(this->BtnTVA2);
			this->Controls->Add(this->BtnTVA1);
			this->Controls->Add(this->txtMontantTotal);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->Btn_Ajouter);
			this->Controls->Add(this->txtPanierMoyen);
			this->Controls->Add(this->lblPanierMoy);
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
			this->Controls->Add(this->txt_NomArticle);
			this->Controls->Add(this->lblValAchat);
			this->Controls->Add(this->txt_RefCommande);
			this->Controls->Add(this->lbl_ValComm);
			this->Controls->Add(this->dataGridViewAffich);
			this->Name = L"GestionStatistiques";
			this->Text = L"GestionStatistiques";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAffich))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}