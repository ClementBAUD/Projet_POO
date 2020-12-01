#pragma once
#include "CL_date.h"
namespace NS_composants {
	ref class CL_commande
	{
	private:
		int id_commande;
		int id_client;
		String^ refComm;
		String^ refArt;
		String^ NomArt;
		String^ Nature;
		int Quantite;
		float PrixHT;
		float TauxTVA;
	public:
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setRefComm(String^);
		void setRefArt(String^);
		void setNomArt(String^);
		void setQuantite(int);
		void setPrixHT(float);
		void setTVA(float);
		void setIDclient(int);
		void setNature(String^);
		String^ getNature(void);
		int getIDclient(void);
		int getID(void);
		String^ getRefComm(void);
		String^ getRefArt(void);
		String^ getNomArt(void);
		int getQuantite(void);
		float getPrixHT(void);
		float getTVA(void);
	};
}