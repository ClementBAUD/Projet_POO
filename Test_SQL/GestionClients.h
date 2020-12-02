#pragma once
#include "GestionPersonnel.h"




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



	private: NS_Svc::CL_svc_gestionPersonnes^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: int index;
	private: String^ mode;


	private: System::Windows::Forms::Label^ lbl_adresse;
	private: System::Windows::Forms::DataGridView^ dataGridView_Adresse;
	private: System::Windows::Forms::DataGridView^ dataGridViewDate;
	private: System::Windows::Forms::Label^ lbl_date;
	private: System::Windows::Forms::Button^ BtnFin;
	private: System::Windows::Forms::Button^ BtnDebut;






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
			this->dataGridViewDate = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_date = (gcnew System::Windows::Forms::Label());
			this->BtnFin = (gcnew System::Windows::Forms::Button());
			this->BtnDebut = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Adresse))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDate))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_idClients
			// 
			this->lbl_idClients->AutoSize = true;
			this->lbl_idClients->Location = System::Drawing::Point(19, 11);
			this->lbl_idClients->Name = L"lbl_idClients";
			this->lbl_idClients->Size = System::Drawing::Size(47, 13);
			this->lbl_idClients->TabIndex = 0;
			this->lbl_idClients->Text = L"ID Client";
			// 
			// txt_idClients
			// 
			this->txt_idClients->Location = System::Drawing::Point(12, 32);
			this->txt_idClients->Name = L"txt_idClients";
			this->txt_idClients->ReadOnly = true;
			this->txt_idClients->Size = System::Drawing::Size(344, 20);
			this->txt_idClients->TabIndex = 1;
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(19, 54);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(29, 13);
			this->lbl_nom->TabIndex = 2;
			this->lbl_nom->Text = L"Nom";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(12, 70);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(344, 20);
			this->txt_nom->TabIndex = 3;
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->Location = System::Drawing::Point(19, 102);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(43, 13);
			this->lbl_prenom->TabIndex = 4;
			this->lbl_prenom->Text = L"Prénom";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(12, 118);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(344, 20);
			this->txt_prenom->TabIndex = 5;
			// 
			// lbl_console
			// 
			this->lbl_console->AutoSize = true;
			this->lbl_console->Location = System::Drawing::Point(427, 379);
			this->lbl_console->Name = L"lbl_console";
			this->lbl_console->Size = System::Drawing::Size(45, 13);
			this->lbl_console->TabIndex = 6;
			this->lbl_console->Text = L"Console";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(412, 395);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_message->Size = System::Drawing::Size(450, 93);
			this->txt_message->TabIndex = 7;
			// 
			// Btn_Avant
			// 
			this->Btn_Avant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Avant->Location = System::Drawing::Point(41, 441);
			this->Btn_Avant->Name = L"Btn_Avant";
			this->Btn_Avant->Size = System::Drawing::Size(139, 23);
			this->Btn_Avant->TabIndex = 9;
			this->Btn_Avant->Text = L"Précédent";
			this->Btn_Avant->UseVisualStyleBackColor = false;
			this->Btn_Avant->Click += gcnew System::EventHandler(this, &MyForm::btn_previous_Click);
			// 
			// BtnSuivant
			// 
			this->BtnSuivant->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnSuivant->Location = System::Drawing::Point(186, 441);
			this->BtnSuivant->Name = L"BtnSuivant";
			this->BtnSuivant->Size = System::Drawing::Size(119, 23);
			this->BtnSuivant->TabIndex = 10;
			this->BtnSuivant->Text = L"Suivant";
			this->BtnSuivant->UseVisualStyleBackColor = false;
			this->BtnSuivant->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// Btn_Ajouter
			// 
			this->Btn_Ajouter->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Btn_Ajouter->Location = System::Drawing::Point(412, 32);
			this->Btn_Ajouter->Name = L"Btn_Ajouter";
			this->Btn_Ajouter->Size = System::Drawing::Size(239, 82);
			this->Btn_Ajouter->TabIndex = 12;
			this->Btn_Ajouter->Text = L"Ajouter";
			this->Btn_Ajouter->UseVisualStyleBackColor = false;
			this->Btn_Ajouter->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_modifier->Location = System::Drawing::Point(412, 146);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(239, 82);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = false;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_suppr->Location = System::Drawing::Point(412, 260);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(239, 82);
			this->btn_suppr->TabIndex = 14;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = false;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &MyForm::btn_sup_Click);
			// 
			// BtnEnregistrer
			// 
			this->BtnEnregistrer->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnEnregistrer->Location = System::Drawing::Point(681, 32);
			this->BtnEnregistrer->Name = L"BtnEnregistrer";
			this->BtnEnregistrer->Size = System::Drawing::Size(181, 310);
			this->BtnEnregistrer->TabIndex = 15;
			this->BtnEnregistrer->Text = L"ENREGISTRER";
			this->BtnEnregistrer->UseVisualStyleBackColor = false;
			this->BtnEnregistrer->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_Click);
			// 
			// lbl_adresse
			// 
			this->lbl_adresse->AutoSize = true;
			this->lbl_adresse->Location = System::Drawing::Point(19, 155);
			this->lbl_adresse->Name = L"lbl_adresse";
			this->lbl_adresse->Size = System::Drawing::Size(56, 13);
			this->lbl_adresse->TabIndex = 17;
			this->lbl_adresse->Text = L"Adresse(s)";
			// 
			// dataGridView_Adresse
			// 
			this->dataGridView_Adresse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Adresse->Location = System::Drawing::Point(12, 171);
			this->dataGridView_Adresse->Name = L"dataGridView_Adresse";
			this->dataGridView_Adresse->Size = System::Drawing::Size(344, 137);
			this->dataGridView_Adresse->TabIndex = 18;
			// 
			// dataGridViewDate
			// 
			this->dataGridViewDate->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDate->Location = System::Drawing::Point(12, 352);
			this->dataGridViewDate->Name = L"dataGridViewDate";
			this->dataGridViewDate->Size = System::Drawing::Size(344, 69);
			this->dataGridViewDate->TabIndex = 20;
			// 
			// lbl_date
			// 
			this->lbl_date->AutoSize = true;
			this->lbl_date->Location = System::Drawing::Point(19, 336);
			this->lbl_date->Name = L"lbl_date";
			this->lbl_date->Size = System::Drawing::Size(98, 13);
			this->lbl_date->TabIndex = 19;
			this->lbl_date->Text = L"Date de Naissance";
			// 
			// BtnFin
			// 
			this->BtnFin->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnFin->Location = System::Drawing::Point(186, 480);
			this->BtnFin->Name = L"BtnFin";
			this->BtnFin->Size = System::Drawing::Size(119, 23);
			this->BtnFin->TabIndex = 84;
			this->BtnFin->Text = L"Fin";
			this->BtnFin->UseVisualStyleBackColor = false;
			// 
			// BtnDebut
			// 
			this->BtnDebut->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnDebut->Location = System::Drawing::Point(41, 480);
			this->BtnDebut->Name = L"BtnDebut";
			this->BtnDebut->Size = System::Drawing::Size(139, 23);
			this->BtnDebut->TabIndex = 83;
			this->BtnDebut->Text = L"Début";
			this->BtnDebut->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(886, 552);
			this->Controls->Add(this->BtnFin);
			this->Controls->Add(this->BtnDebut);
			this->Controls->Add(this->dataGridViewDate);
			this->Controls->Add(this->lbl_date);
			this->Controls->Add(this->dataGridView_Adresse);
			this->Controls->Add(this->lbl_adresse);
			this->Controls->Add(this->BtnEnregistrer);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->Btn_Ajouter);
			this->Controls->Add(this->BtnSuivant);
			this->Controls->Add(this->Btn_Avant);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_console);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->txt_idClients);
			this->Controls->Add(this->lbl_idClients);
			this->Name = L"MyForm";
			this->Text = L"Gestion Clients";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Adresse))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDate))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->mode = "Null";
		this->ds = gcnew Data::DataSet();
		this->processusPersonnes = gcnew NS_Svc::CL_svc_gestionPersonnes();
		this->loadData(this->index);
		this->txt_message->Text = "Chargement effectué";
	}
	private: void loadData(int index)
	{
		this->ds->Clear();
		this->ds = this->processusPersonnes->listePersonnes("liste");
		this->txt_idClients->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[1]);
		this->txt_prenom->Text = Convert::ToString(this->ds->Tables["liste"]->Rows[this->index]->ItemArray[2]);
	}
	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index);
			this->txt_message->Text = "Personne numéro :  " + (this->index + 1);
		}
	}
	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index < this->ds->Tables["liste"]->Rows->Count - 1)
		{
			this->index++;
			this->loadData(this->index);
			this->txt_message->Text = "Personne numéro :  " + (this->index + 1);
		}
	}
	private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->txt_idClients->Clear();
		this->txt_nom->Clear();
		this->txt_prenom->Clear();
		this->mode = "nouv";
		this->txt_message->Text = "Confirmer la nouvelle personne en appuyant sur enregistre";
	}
	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "maj";
		this->txt_message->Text = "Confirmer la suppresion en appuyant sur enregistre";
	}
	private: System::Void btn_sup_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->mode = "sup";
		this->txt_message->Text = "Confirmer la suppresion en appuyant sur enregistrer";
	}
	private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->mode == "nouv")
		{
			int Id;
			Id = this->processusPersonnes->ajouter(this->txt_nom->Text, this->txt_prenom->Text);
			this->txt_message->Text = "L'ID généré est le : " + Id + ". ";
		}
		else if (this->mode == "maj")
		{
			this->processusPersonnes->modifier(Convert::ToInt32(this->txt_idClients->Text), this->txt_nom->Text, this->txt_prenom->Text);
		}
		else if (this->mode == "sup")
		{
			this->processusPersonnes->supprimer(Convert::ToInt32(this->txt_idClients->Text));
		}
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text += "Traitement terminé.";
	}
	private: System::Void BtnAfficher_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void BtnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
	};
}