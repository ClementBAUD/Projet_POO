#pragma once

#include "GestionPersonnel.h"
#include "GestionClients.h"
#include "GestionCommande.h"
#include "GestionStock.h"
#include "GestionStatistiques.h"

namespace Projet_POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class Menu : public System::Windows::Forms::Form
	{
	public:
		Menu(void)
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
		~Menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnGestionClients;
	protected:

	protected:
	private: System::Windows::Forms::Button^ BtnGestionStock;
	private: System::Windows::Forms::Button^ btnGestionCommandes;
	private: System::Windows::Forms::Button^ BtnGestionPersonnel;

	private: System::Windows::Forms::Button^ BtnLeave;
	private: System::Windows::Forms::Button^ btnGestionStat;
	private: System::Windows::Forms::Label^ lbl_titre;

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
			this->BtnGestionClients = (gcnew System::Windows::Forms::Button());
			this->BtnGestionStock = (gcnew System::Windows::Forms::Button());
			this->btnGestionCommandes = (gcnew System::Windows::Forms::Button());
			this->BtnGestionPersonnel = (gcnew System::Windows::Forms::Button());
			this->BtnLeave = (gcnew System::Windows::Forms::Button());
			this->btnGestionStat = (gcnew System::Windows::Forms::Button());
			this->lbl_titre = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnGestionClients
			// 
			this->BtnGestionClients->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnGestionClients->Location = System::Drawing::Point(12, 132);
			this->BtnGestionClients->Name = L"BtnGestionClients";
			this->BtnGestionClients->Size = System::Drawing::Size(180, 76);
			this->BtnGestionClients->TabIndex = 20;
			this->BtnGestionClients->Text = L"Gestion des clients";
			this->BtnGestionClients->UseVisualStyleBackColor = false;
			this->BtnGestionClients->Click += gcnew System::EventHandler(this, &Menu::BtnGestionClient_Click);
			// 
			// BtnGestionStock
			// 
			this->BtnGestionStock->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnGestionStock->Location = System::Drawing::Point(725, 132);
			this->BtnGestionStock->Name = L"BtnGestionStock";
			this->BtnGestionStock->Size = System::Drawing::Size(180, 76);
			this->BtnGestionStock->TabIndex = 19;
			this->BtnGestionStock->Text = L"Gestion du stock";
			this->BtnGestionStock->UseVisualStyleBackColor = false;
			this->BtnGestionStock->Click += gcnew System::EventHandler(this, &Menu::BtnGestionStock_Click);
			// 
			// btnGestionCommandes
			// 
			this->btnGestionCommandes->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnGestionCommandes->Location = System::Drawing::Point(487, 132);
			this->btnGestionCommandes->Name = L"btnGestionCommandes";
			this->btnGestionCommandes->Size = System::Drawing::Size(180, 76);
			this->btnGestionCommandes->TabIndex = 18;
			this->btnGestionCommandes->Text = L"Gestion des commandes";
			this->btnGestionCommandes->UseVisualStyleBackColor = false;
			this->btnGestionCommandes->Click += gcnew System::EventHandler(this, &Menu::btnGestionCommandes_Click);
			// 
			// BtnGestionPersonnel
			// 
			this->BtnGestionPersonnel->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnGestionPersonnel->Location = System::Drawing::Point(246, 132);
			this->BtnGestionPersonnel->Name = L"BtnGestionPersonnel";
			this->BtnGestionPersonnel->Size = System::Drawing::Size(180, 76);
			this->BtnGestionPersonnel->TabIndex = 17;
			this->BtnGestionPersonnel->Text = L"Gestion du personnel";
			this->BtnGestionPersonnel->UseVisualStyleBackColor = false;
			this->BtnGestionPersonnel->Click += gcnew System::EventHandler(this, &Menu::BtnGestionPersonnel_Click_1);
			// 
			// BtnLeave
			// 
			this->BtnLeave->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BtnLeave->Location = System::Drawing::Point(405, 233);
			this->BtnLeave->Name = L"BtnLeave";
			this->BtnLeave->Size = System::Drawing::Size(342, 85);
			this->BtnLeave->TabIndex = 21;
			this->BtnLeave->Text = L"Quitter l\'application";
			this->BtnLeave->UseVisualStyleBackColor = false;
			this->BtnLeave->Click += gcnew System::EventHandler(this, &Menu::BtnLeave_Click);
			// 
			// btnGestionStat
			// 
			this->btnGestionStat->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnGestionStat->Location = System::Drawing::Point(970, 132);
			this->btnGestionStat->Name = L"btnGestionStat";
			this->btnGestionStat->Size = System::Drawing::Size(180, 76);
			this->btnGestionStat->TabIndex = 22;
			this->btnGestionStat->Text = L"Gestion des statistiques";
			this->btnGestionStat->UseVisualStyleBackColor = false;
			this->btnGestionStat->Click += gcnew System::EventHandler(this, &Menu::btnGestionStat_Click);
			// 
			// lbl_titre
			// 
			this->lbl_titre->AutoSize = true;
			this->lbl_titre->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_titre->Location = System::Drawing::Point(105, 40);
			this->lbl_titre->Name = L"lbl_titre";
			this->lbl_titre->Size = System::Drawing::Size(956, 45);
			this->lbl_titre->TabIndex = 23;
			this->lbl_titre->Text = L"Bonjour veuillez choisir le mode de gestion que vous désirez.";
			// 
			// Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1162, 349);
			this->Controls->Add(this->lbl_titre);
			this->Controls->Add(this->btnGestionStat);
			this->Controls->Add(this->BtnLeave);
			this->Controls->Add(this->BtnGestionClients);
			this->Controls->Add(this->BtnGestionStock);
			this->Controls->Add(this->btnGestionCommandes);
			this->Controls->Add(this->BtnGestionPersonnel);
			this->Name = L"Menu";
			this->Text = L"Menu Principal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnLeave_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnGestionClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();// Cache la fenêtre
		CL_GestionClients::MyForm object_name_GestionClient; //Nom NameSpace + nom classe + nom random
		object_name_GestionClient.ShowDialog();//Selectionne le nom random pour afficher
		this->Show();//Fait l'affichage avec this
	}
	private: System::Void BtnGestionPersonnel_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();// Cache la fenêtre
		CL_GestionPersonnel::MyForm1 object_name_GestionPersonnel; //Nom NameSpace + nom classe + nom random
		object_name_GestionPersonnel.ShowDialog();//Selectionne le nom random pour afficher
		this->Show();//Fait l'affichage avec this
	}
	private: System::Void btnGestionCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();// Cache la fenêtre
		CL_GestionCommande::GestionCommande object_name_GestionCommande; //Nom NameSpace + nom classe + nom random
		object_name_GestionCommande.ShowDialog();//Selectionne le nom random pour afficher
		this->Show();//Fait l'affichage avec this
	}
	private: System::Void BtnGestionStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();// Cache la fenêtre
		CL_GestionStock::GestionStock object_name_GestionStock; //Nom NameSpace + nom classe + nom random
		object_name_GestionStock.ShowDialog();//Selectionne le nom random pour afficher
		this->Show();//Fait l'affichage avec this 
	}
	private: System::Void btnGestionStat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();// Cache la fenêtre
		CL_GestionStatistique::GestionStatistiques object_name_GestionStat; //Nom NameSpace + nom classe + nom random
		object_name_GestionStat.ShowDialog();//Selectionne le nom random pour afficher
		this->Show();//Fait l'affichage avec this 
	}
	};
}