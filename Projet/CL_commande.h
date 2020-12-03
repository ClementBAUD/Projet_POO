#pragma once
#include "CL_date.h"
namespace NS_composants {
	//Classe commande permettant de gérer les commandes
	ref class CL_commande
	{
	//On definit les différents attributs concernant une commande en privée
	private:
		int id_commande;// Identifiant commande
		int id_client;// Identifiant client
		String^ refComm;// attribut référence commande
		String^ refArt;// attribut référence article
		String^ NomArt;// attribut Nom de l'article
		String^ Nature;// attribut Nature de l'article
		int Quantite;// attribut Quantité de l'article
		float PrixHT;// attribut Prix de l'article
		float TauxTVA;// attribut Taux de tva de l'article
	public:
		//On definit les differentes methodes necessaire :
		String^ SELECT(void); //Methode Selection par rapport à la BDD
		String^ INSERT(void);//Methode insertion par rapport à la BDD
		String^ UPDATE(void);//Methode Mise à jour par rapport à la BDD
		String^ DELETE(void); //Methode suppression par rapport à la BDD
		void setID(int); //Setteur de ID
		void setRefComm(String^);//Setteur de la reference de la commande
		void setRefArt(String^);//Setteur de la reference de l'article
		void setNomArt(String^);//Setteur du nom de l'article
		void setQuantite(int);//Setteur de la quantite
		void setPrixHT(float);//Setteur du prix hors taxe
		void setTVA(float);//Setteur de la TVA
		void setIDclient(int);//Setteur de ID pour le client
		void setNature(String^);//Setteur pour la nature de l'article
		String^ getNature(void);//Getteur pour recuprer l'attribut correspondant 
		int getIDclient(void);//Getteur pour recuprer l'attribut correspondant 
		int getID(void);//Getteur pour recuprer l'attribut correspondant 
		String^ getRefComm(void);//Getteur pour recuprer l'attribut correspondant 
		String^ getRefArt(void);//Getteur pour recuprer l'attribut correspondant 
		String^ getNomArt(void);//Getteur pour recuprer l'attribut correspondant 
		int getQuantite(void);//Getteur pour recuprer l'attribut correspondant 
		float getPrixHT(void);//Getteur pour recuprer l'attribut correspondant 
		float getTVA(void);//Getteur pour recuprer l'attribut correspondant 
	};
}
