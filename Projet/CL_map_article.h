#pragma once
using namespace System;
namespace NS_composants
{
	ref class CL_map_article
	{
	private:
		int id_article;
		int PrixHT;
		String^ Ref_Article;
		String^ Nom_Article;
		int Stock_Article;
		String^ Nat_Article;
		String^ Couleur_Article;
		int SeuilReappro_Article;
		int TauxTVA;
		int QuantiteVendu;
	public:
		CL_map_article(void);
		String^ SELECT(void);
		String^ SELECTONE(void);
		String^ UPDATESTOCK(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setId_Article(int);
		void setVendu(int);
		void setPrixHT(int);
		void setRef_Article(String^);
		void setNom_Article(String^);
		void setStock_Article(int);
		void setNat_Article(String^);
		void setCouleur_Article(String^);
		void setSeuilReappro_Article(int);
		void setTauxTVA(int);
		int getId_Article(void);
		int getVendu(void);
		int getPrixHT(void);
		String^ getRef_Article(void);
		String^ getNom_Article(void);
		int getStock_Article(void);
		String^ getNat_Article(void);
		String^ getCouleur_Article(void);
		int getSeuil_Reappro_Article(void);
		int getTauxTVA(void);
	};
}