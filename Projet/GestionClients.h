#pragma once
#include "GestionPersonnel.h"
#include "CL_svc_personne.h"

namespace CL_GestionClients {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Description résumée de FRM_Principal
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
	private: System::Windows::Forms::Label^ lbl_idClients;
	private: System::Windows::Forms::TextBox^ txt_idClients;
	protected:


	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Label^ lbl_console;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Button^ Btn_Avant;
	private: System::Windows::Forms::Button^ BtnSuivant;
	private: System::Windows::Forms::Button^ Btn_Ajouter;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ BtnEnregistrer;
	private: System::Windows::Forms::Label^ lbl_adresse;
	private: System::Windows::Forms::DataGridView^ dataGridView_Adresse;


	private: System::Windows::Forms::Button^ BtnFin;
	private: System::Windows::Forms::Button^ BtnDebut;
	private: Data::DataSet^ ds;
	private: Data::DataSet^ ds2;
	private: Data::DataSet^ ds3;
	private: int index;
	private: String^ mode;
	private: String^ mode2;
	private: String^ mode3;
	private: NS_services::CL_svc_personne^ personne;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_supprimer;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txt_donne1;

	private: System::Windows::Forms::TextBox^ txt_donne2;
	private: System::Windows::Forms::TextBox^ txt_donne3;



	private: System::Windows::Forms::Label^ lbl_1;
	private: System::Windows::Forms::Label^ lbl_2;
	private: System::Windows::Forms::Label^ lbl3;
	private: System::Windows::Forms::Button^ btn_register;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::TextBox^ txt_type;
	private: System::Windows::Forms::Label^ lbl_type;













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
			this->lbl_idClients = (gcnew System::Windows::Forms::Label());
			this->txt_idClients = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_console = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Avant = (gcnew System::Windows::Forms::Button());
			this->BtnSuivant = (gcnew System::Windows::Forms::Button());
			this->Btn_Ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->BtnEnregistrer = (gcnew System::Windows::Forms::Button());
			this->lbl_adresse = (gcnew System::Windows::Forms::Label());
			this->dataGridView_Adresse = (gcnew System::Windows::Forms::DataGridView());
			this->BtnFin = (gcnew System::Windows::Forms::Button());
			this->BtnDebut = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_modif = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt_donne1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_donne2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_donne3 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_1 = (gcnew System::Windows::Forms::Label());
			this->lbl_2 = (gcnew System::Windows::Forms::Label());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->txt_type = (gcnew System::Windows::Forms::TextBox());
			this->lbl_type = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Adresse))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_idClients
			// 
			this->lbl_idClients->AutoSize = true;
			this->lbl_idClients->Location = System::Drawing::Point(10, 8);
			this->lbl_idClients->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_idClients->Name = L"lbl_idClients";
			this->lbl_idClients->Size = System::Drawing::Size(60, 17);
			this->lbl_idClients->TabIndex = 0;
			this->lbl_idClients->Text = L"ID Client";
			// 
			// txt_idClients
			// 
			this->txt_idClients->Location = System::Drawing::Point(4, 29);
			this->txt_idClients->Margin = System::Windows::Forms::Padding(4);
			this->txt_idClients->Name = L"txt_idClients";
			this->txt_idClients->ReadOnly = true;
			this->txt_idClients->Size = System::Drawing::Size(457, 22);
			this->txt_idClients->TabIndex = 1;
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(13, 56);
			this->lbl_nom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(37, 17);
			this->lbl_nom->TabIndex = 2;
			this->lbl_nom->Text = L"Nom";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(4, 76);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(457, 22);
			this->txt_nom->TabIndex = 3;
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->Location = System::Drawing::Point(13, 116);
			this->lbl_prenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(57, 17);
			this->lbl_prenom->TabIndex = 4;
			this->lbl_prenom->Text = L"Prénom";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(4, 135);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(457, 22);
			this->txt_prenom->TabIndex = 5;
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(1062, 171);
			this->lbl_console->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(59, 17);
			this->lbl_console->TabIndex = 6;
			this->lbl_console->Text = L"Console";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(684, 192);
			this->txt_message->Margin = System::Windows::Forms::Padding(4);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(443, 114);
			this->txt_message->TabIndex = 7;
			// 
			// Btn_Avant
			// 
			this->Btn_Avant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Avant->Location = System::Drawing::Point(28, 175);
			this->Btn_Avant->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Avant->Name = L"Btn_Avant";
			this->Btn_Avant->Size = System::Drawing::Size(185, 28);
			this->Btn_Avant->TabIndex = 9;
			this->Btn_Avant->Text = L"Précédent";
			this->Btn_Avant->UseVisualStyleBackColor = false;
			this->Btn_Avant->Click += gcnew System::EventHandler(this, &MyForm::btn_previous_Click);
			// 
			// BtnSuivant
			// 
			this->BtnSuivant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnSuivant->Location = System::Drawing::Point(255, 175);
			this->BtnSuivant->Margin = System::Windows::Forms::Padding(4);
			this->BtnSuivant->Name = L"BtnSuivant";
			this->BtnSuivant->Size = System::Drawing::Size(159, 28);
			this->BtnSuivant->TabIndex = 10;
			this->BtnSuivant->Text = L"Suivant";
			this->BtnSuivant->UseVisualStyleBackColor = false;
			this->BtnSuivant->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(537, 29);
			this->Btn_Ajouter->Margin = System::Windows::Forms::Padding(4);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(113, 44);
			this->Btn_Ajouter->TabIndex = 12;
			this->Btn_Ajouter->Text = L"Ajouter";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			this->Btn_Ajouter->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(537, 76);
			this->btn_modifier->Margin = System::Windows::Forms::Padding(4);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(113, 47);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(537, 131);
			this->btn_suppr->Margin = System::Windows::Forms::Padding(4);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(113, 43);
			this->btn_suppr->TabIndex = 14;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = false;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &MyForm::btn_sup_Click);
			// 
			// BtnEnregistrer
			// 
			this->BtnEnregistrer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnEnregistrer->Location = System::Drawing::Point(684, 39);
			this->BtnEnregistrer->Margin = System::Windows::Forms::Padding(4);
			this->BtnEnregistrer->Name = L"BtnEnregistrer";
			this->BtnEnregistrer->Size = System::Drawing::Size(241, 145);
			this->BtnEnregistrer->TabIndex = 15;
			this->BtnEnregistrer->Text = L"ENREGISTRER";
			this->BtnEnregistrer->UseVisualStyleBackColor = false;
			this->BtnEnregistrer->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_Click);
			// 
			// lbl_adresse
			// 
			this->lbl_adresse->AutoSize = true;
			this->lbl_adresse->Location = System::Drawing::Point(13, 319);
			this->lbl_adresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_adresse->Name = L"lbl_adresse";
			this->lbl_adresse->Size = System::Drawing::Size(65, 17);
			this->lbl_adresse->TabIndex = 17;
			this->lbl_adresse->Text = L"Données";
			// 
			// dataGridView_Adresse
			// 
			this->dataGridView_Adresse->AllowUserToAddRows = false;
			this->dataGridView_Adresse->AllowUserToDeleteRows = false;
			this->dataGridView_Adresse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Adresse->Location = System::Drawing::Point(13, 340);
			this->dataGridView_Adresse->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView_Adresse->Name = L"dataGridView_Adresse";
			this->dataGridView_Adresse->ReadOnly = true;
			this->dataGridView_Adresse->RowHeadersWidth = 51;
			this->dataGridView_Adresse->Size = System::Drawing::Size(658, 259);
			this->dataGridView_Adresse->TabIndex = 18;
			// 
			// BtnFin
			// 
			this->BtnFin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnFin->Location = System::Drawing::Point(255, 211);
			this->BtnFin->Margin = System::Windows::Forms::Padding(4);
			this->BtnFin->Name = L"BtnFin";
			this->BtnFin->Size = System::Drawing::Size(159, 28);
			this->BtnFin->TabIndex = 84;
			this->BtnFin->Text = L"Fin";
			this->BtnFin->UseVisualStyleBackColor = false;
			this->BtnFin->Click += gcnew System::EventHandler(this, &MyForm::BtnFin_Click);
			// 
			// BtnDebut
			// 
			this->BtnDebut->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDebut->Location = System::Drawing::Point(28, 211);
			this->BtnDebut->Margin = System::Windows::Forms::Padding(4);
			this->BtnDebut->Name = L"BtnDebut";
			this->BtnDebut->Size = System::Drawing::Size(185, 28);
			this->BtnDebut->TabIndex = 83;
			this->BtnDebut->Text = L"Début";
			this->BtnDebut->UseVisualStyleBackColor = false;
			this->BtnDebut->Click += gcnew System::EventHandler(this, &MyForm::BtnDebut_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(537, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 54);
			this->button1->TabIndex = 85;
			this->button1->Text = L"Changement données";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_add->Location = System::Drawing::Point(705, 340);
			this->btn_add->Margin = System::Windows::Forms::Padding(4);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(113, 44);
			this->btn_add->TabIndex = 86;
			this->btn_add->Text = L"Ajouter";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_modif
			// 
			this->btn_modif->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modif->Location = System::Drawing::Point(826, 340);
			this->btn_modif->Margin = System::Windows::Forms::Padding(4);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(113, 44);
			this->btn_modif->TabIndex = 87;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = false;
			this->btn_modif->Click += gcnew System::EventHandler(this, &MyForm::btn_modif_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_supprimer->Location = System::Drawing::Point(947, 340);
			this->btn_supprimer->Margin = System::Windows::Forms::Padding(4);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(113, 44);
			this->btn_supprimer->TabIndex = 88;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = false;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm::btn_supprimer_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->BtnFin);
			this->groupBox1->Controls->Add(this->BtnDebut);
			this->groupBox1->Controls->Add(this->btn_suppr);
			this->groupBox1->Controls->Add(this->btn_modifier);
			this->groupBox1->Controls->Add(this->Btn_Ajouter);
			this->groupBox1->Controls->Add(this->BtnSuivant);
			this->groupBox1->Controls->Add(this->Btn_Avant);
			this->groupBox1->Controls->Add(this->txt_prenom);
			this->groupBox1->Controls->Add(this->lbl_prenom);
			this->groupBox1->Controls->Add(this->txt_nom);
			this->groupBox1->Controls->Add(this->lbl_nom);
			this->groupBox1->Controls->Add(this->txt_idClients);
			this->groupBox1->Controls->Add(this->lbl_idClients);
			this->groupBox1->Location = System::Drawing::Point(12, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(659, 295);
			this->groupBox1->TabIndex = 89;
			this->groupBox1->TabStop = false;
			// 
			// txt_donne1
			// 
			this->txt_donne1->Location = System::Drawing::Point(711, 407);
			this->txt_donne1->Margin = System::Windows::Forms::Padding(4);
			this->txt_donne1->Name = L"txt_donne1";
			this->txt_donne1->Size = System::Drawing::Size(457, 22);
			this->txt_donne1->TabIndex = 86;
			// 
			// txt_donne2
			// 
			this->txt_donne2->Location = System::Drawing::Point(711, 454);
			this->txt_donne2->Margin = System::Windows::Forms::Padding(4);
			this->txt_donne2->Name = L"txt_donne2";
			this->txt_donne2->Size = System::Drawing::Size(457, 22);
			this->txt_donne2->TabIndex = 90;
			// 
			// txt_donne3
			// 
			this->txt_donne3->Location = System::Drawing::Point(711, 501);
			this->txt_donne3->Margin = System::Windows::Forms::Padding(4);
			this->txt_donne3->Name = L"txt_donne3";
			this->txt_donne3->Size = System::Drawing::Size(457, 22);
			this->txt_donne3->TabIndex = 91;
			// 
			// lbl_1
			// 
			this->lbl_1->AutoSize = true;
			this->lbl_1->Location = System::Drawing::Point(708, 388);
			this->lbl_1->Name = L"lbl_1";
			this->lbl_1->Size = System::Drawing::Size(60, 17);
			this->lbl_1->TabIndex = 92;
			this->lbl_1->Text = L"Adresse";
			// 
			// lbl_2
			// 
			this->lbl_2->AutoSize = true;
			this->lbl_2->Location = System::Drawing::Point(708, 433);
			this->lbl_2->Name = L"lbl_2";
			this->lbl_2->Size = System::Drawing::Size(34, 17);
			this->lbl_2->TabIndex = 93;
			this->lbl_2->Text = L"Ville";
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Location = System::Drawing::Point(708, 480);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(92, 17);
			this->lbl3->TabIndex = 94;
			this->lbl3->Text = L"Code Postale";
			// 
			// btn_register
			// 
			this->btn_register->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_register->Location = System::Drawing::Point(1068, 340);
			this->btn_register->Margin = System::Windows::Forms::Padding(4);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(113, 44);
			this->btn_register->TabIndex = 95;
			this->btn_register->Text = L"Enregistrer";
			this->btn_register->UseVisualStyleBackColor = false;
			this->btn_register->Click += gcnew System::EventHandler(this, &MyForm::btn_register_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(711, 592);
			this->txt_id->Margin = System::Windows::Forms::Padding(4);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(457, 22);
			this->txt_id->TabIndex = 96;
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(708, 571);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(19, 17);
			this->lbl_id->TabIndex = 97;
			this->lbl_id->Text = L"Id";
			// 
			// txt_type
			// 
			this->txt_type->Location = System::Drawing::Point(711, 545);
			this->txt_type->Margin = System::Windows::Forms::Padding(4);
			this->txt_type->Name = L"txt_type";
			this->txt_type->Size = System::Drawing::Size(457, 22);
			this->txt_type->TabIndex = 98;
			// 
			// lbl_type
			// 
			this->lbl_type->AutoSize = true;
			this->lbl_type->Location = System::Drawing::Point(708, 524);
			this->lbl_type->Name = L"lbl_type";
			this->lbl_type->Size = System::Drawing::Size(106, 17);
			this->lbl_type->TabIndex = 99;
			this->lbl_type->Text = L"Type d\'adresse";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1181, 679);
			this->Controls->Add(this->lbl_type);
			this->Controls->Add(this->txt_type);
			this->Controls->Add(this->lbl_id);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_register);
			this->Controls->Add(this->lbl3);
			this->Controls->Add(this->lbl_2);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->txt_donne3);
			this->Controls->Add(this->txt_donne2);
			this->Controls->Add(this->txt_donne1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->btn_modif);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->dataGridView_Adresse);
			this->Controls->Add(this->lbl_adresse);
			this->Controls->Add(this->BtnEnregistrer);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_console);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Gestion Clients";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Adresse))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->mode = "RIEN";
		this->mode2 = "adr";
		this->ds = gcnew Data::DataSet();
		this->ds2 = gcnew Data::DataSet();
		this->ds3 = gcnew Data::DataSet();
		this->personne = gcnew NS_services::CL_svc_personne();
		this->loadData(this->index);
		this->loadData2();
		this->txt_message->Text = "Data chargées";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->personne->listeClient("liste");
		this->txt_idClients->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
		this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
	}
	private: void loadData2() {
		this->ds2->Clear();
		this->ds2 = this->personne->listeAdrC(Convert::ToInt32(this->txt_idClients->Text), "listeadr");
		this->dataGridView_Adresse->Columns->Clear();
		this->dataGridView_Adresse->DataSource = this->ds2;
		this->dataGridView_Adresse->DataMember = "listeadr";
	}
	private: void loadData3() {
		this->ds3->Clear();
		this->ds3 = this->personne->listeDateC(Convert::ToInt32(this->txt_idClients->Text), "listedate");
		this->dataGridView_Adresse->Columns->Clear();
		this->dataGridView_Adresse->DataSource = this->ds3;
		this->dataGridView_Adresse->DataMember = "listedate";
		}
	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0) {
			this->ds = this->personne->listeClient("liste");
			this->index--;
			this->loadData(this->index);
			this->loadData2();
			this->txt_message->Text = "Element n°:" + (this->index + 1);
			this->mode2 = "adr";
		}
	}
	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->ds = this->personne->listeClient("liste");
		if (this->index < this->ds->Tables["liste"]->Rows->Count - 1) {
			this->index++;
			this->loadData(this->index);
			this->loadData2();
			this->txt_message->Text = "Element n°:" + (this->index + 1);
			this->mode2 = "adr";
		}
	}
	private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->txt_idClients->Clear();
		this->txt_nom->Clear();
		this->txt_prenom->Clear();
		this->dataGridView_Adresse->Columns->Clear();
		this->mode = "new";
		this->txt_message->Text = "Veuillez saisir un nom, un prenom";
	}
	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "modify";
		this->txt_message->Text = "Veuillez modifier les informations";
	}
	private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "delete";
		this->txt_message->Text = "Etes-vous sur de vouloir supprimer ce client ?";
	}
	private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->mode == "new") {
			if ((this->txt_nom->Text != "") && (this->txt_prenom->Text != "")) {
			int id_personne;
			id_personne = this->personne->ajouterC(this->txt_nom->Text, this->txt_prenom->Text);
			this->txt_message->Text = "L'ID généré est le :" + id_personne;
			this->index++;
			this->loadData(this->index);
			this->loadData2();
			}
			else {
				this->txt_message->Text = "Veuillez donner un nom et un prénom";
			}
		}
		else if (this->mode == "modify") {
			if ((this->txt_nom->Text != "") && (this->txt_prenom->Text != "")) {
			this->personne->modifierC(Convert::ToInt32(this->txt_idClients->Text), this->txt_nom->Text, this->txt_prenom->Text);
			this->loadData(this->index);
			this->loadData2();
			}
			else {
				this->txt_message->Text = "Veuillez donner un nom et un prénom";
			}
		}
		else if (this->mode == "delete") {
			this->personne->supprimerAC(Convert::ToInt32(this->txt_idClients->Text));
			this->personne->supprimerDC(Convert::ToInt32(this->txt_idClients->Text));
			this->personne->supprimerC(Convert::ToInt32(this->txt_idClients->Text));
			this->index = 0;
			this->loadData(this->index);
			this->loadData2();
		}
		
		this->txt_message->Text += "Traitement terminé.";
	}
	private: System::Void BtnDebut_Click(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;	
		this->loadData(this->index);
		this->loadData2();
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
		this->mode2 = "adr";
	}
private: System::Void BtnFin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ds = this->personne->listeClient("liste");
	this->index = this->ds->Tables["liste"]->Rows->Count - 1;
	this->loadData(this->index);
	this->loadData2();
	this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	this->mode2 = "adr";
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode2 == "adr") {
		this->loadData3();
		this->lbl_1->Text = "Jour";
		this->lbl_2->Text = "Mois";
		this->lbl3->Text = "Année";
		this->lbl_type->Text = "Type de date";
		mode2 = "date";
	}
	else if (mode2 == "date") {
		this->loadData2();
		this->lbl_1->Text = "Adresse";
		this->lbl_2->Text = "Ville";
		this->lbl3->Text = "Code Postale";
		this->lbl_type->Text = "Type d'adresse";
		mode2 = "adr";
	}
}
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txt_donne1->Clear();
	this->txt_donne2->Clear();
	this->txt_donne3->Clear();
	this->txt_type->Clear();
	this->txt_id->Clear();
	this->mode3 = "new";
	this->txt_message->Text = "Veuillez saisir les informations";
}
private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode3 = "modify";
	this->txt_message->Text = "Veuillez modifier les informations ~~ N'oubliez pas de saisir l'id ~~";
}
private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	this->mode3 = "supp";
	this->txt_message->Text = "Etes-vous sur de vouloir supprimer ?";
}
private: System::Void btn_register_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((mode3 == "new")&&(mode2 =="adr")){
		if ((this->txt_donne1->Text != "") && (this->txt_donne2->Text != "") && (this->txt_donne3->Text != "")) {
		int id_adr;
		id_adr = this->personne->ajouterAdrC(Convert::ToInt32(this->txt_idClients->Text),this->txt_donne1->Text, this->txt_donne2->Text, this->txt_donne3->Text,this->txt_type->Text);
		this->txt_message->Text = "L'ID généré est le :" + id_adr;
		this->loadData2();
		}
		else {
			this->txt_message->Text = "Veuillez remplir comme il faut les champs de données";
		}
	}
	else if ((mode3 == "supp") && (mode2 == "adr")) {
		this->personne->supprimerAC(Convert::ToInt32(this->txt_idClients->Text));
		this->loadData2();
	}
	else if ((mode3 == "modify") && (mode2 == "adr")) {
	if ((this->txt_donne1->Text != "") && (this->txt_donne2->Text != "") && (this->txt_donne3->Text != "") && (this->txt_id->Text != "")) {
		this->personne->modifierAdrC(Convert::ToInt32(this->txt_idClients->Text), Convert::ToInt32(this->txt_id->Text), this->txt_donne1->Text, this->txt_donne2->Text, this->txt_donne3->Text);
		this->loadData2();
	}
	else {
		this->txt_message->Text = "Veuillez remplir comme il faut les champs de données";
	}
	} else if ((mode3 == "new") && (mode2 == "date")) {
		if ((this->txt_donne1->Text != "") && (this->txt_donne2->Text != "") && (this->txt_donne3->Text != "")) {
		int id_adr;
		id_adr = this->personne->ajouterDateC(Convert::ToInt32(this->txt_idClients->Text), Convert::ToInt32(this->txt_donne1->Text), Convert::ToInt32(this->txt_donne2->Text), Convert::ToInt32(this->txt_donne3->Text),this->txt_type->Text);
		this->txt_message->Text = "L'ID généré est le :" + id_adr;
		this->loadData3();
		}
		else {
			this->txt_message->Text = "Veuillez remplir comme il faut les champs de données";
		}
	}
	else if ((mode3 == "supp") && (mode2 == "date")) {
		this->personne->supprimerDC(Convert::ToInt32(this->txt_idClients->Text));
		this->loadData3();
	}
	else if ((mode3 == "modify") && (mode2 == "date")) {
		if ((this->txt_donne1->Text != "") && (this->txt_donne2->Text != "") && (this->txt_donne3->Text != "") && (this->txt_id->Text != "")) {
		this->personne->modifierDateC(Convert::ToInt32(this->txt_idClients->Text), Convert::ToInt32(this->txt_id->Text),Convert::ToInt32(this->txt_donne1->Text), Convert::ToInt32(this->txt_donne2->Text), Convert::ToInt32(this->txt_donne3->Text));
		this->loadData3();
		}
		else {
			this->txt_message->Text = "Veuillez remplir comme il faut les champs de données";
		}
	}
}
};
}