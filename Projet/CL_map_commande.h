#pragma once
#include "CL_map_date.h"
#include "CL_map_Client.h"
namespace NS_composants {
	ref class CL_map_commande
	{
	private:
		int id_commande;
		int id_client;
		int id_article;
		String^ refComm;
		String^ refArt;
		String^ NomArt;
		String^ Nature;
		int Quantite;
		float PrixHT;
		int TauxTVA;
	public:
		CL_map_commande(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		String^ DELETEALL(void);
		String^ SELECTALL(void);
		void setIDarticle(int);
		void setID(int);
		void setIDclient(int);
		void setRefComm(String^);
		void setRefArt(String^);
		void setNomArt(String^);
		void setNature(String^);
		void setQuantite(int);
		void setPrixHT(float);
		void setTVA(int);
		int getID_article(void);
		int getID(void);
		int getIDclient(void);
		String^ getRefComm(void);
		String^ getRefArt(void);
		String^ getNomArt(void);
		String^ getNature(void);
		int getQuantite(void);
		float getPrixHT(void);
		int getTVA(void);
	};
}