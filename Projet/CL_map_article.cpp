#include "CL_map_article.h"

namespace NS_composants
{
	CL_map_article::CL_map_article(void)
	{
		this->id_article = -1;
		this->PrixHT = -1;
		this->Ref_Article = "ERROR0";
		this->Nom_Article = "RIEN";
		this->Stock_Article = -1;
		this->Nat_Article = "RIEN";
		this->Couleur_Article = "RIEN";
		this->SeuilReappro_Article = -1;
		this->TauxTVA = -1;
	}

	String^ CL_map_article::SELECT(void)
	{
		return "SELECT PrixHT, Reference, Nom, Quantite_en_stock, Designation, Couleur, Seuil_de_reaprovisionnement, TauxTVA  " +
			"FROM Article;";
	}

	String^ CL_map_article::INSERT(void)
	{
		return "INSERT INTO Article " +
			"(PrixHT, Reference, Nom, Quantite_en_stock, Designation, Couleur, Seuil_de_reaprovisionnement, TauxTVA) " +
			"VALUES('" + this->getPrixHT() + "','" + this->getRef_Article() + "', '" + this->getNom_Article() + "', '" +
			this->getStock_Article() + "', '" + this->getNat_Article() + "', '" + this->getCouleur_Article() + "', '" +
			this->getSeuil_Reappro_Article() + "','" + this->getTauxTVA() + "');SELECT @@IDENTITY;";
	}

	String^ CL_map_article::UPDATE(void)
	{
		return "UPDATE TB_Article " +
			"SET PrixHT = '" + this->getPrixHT() + "', Reference = '" + this->getRef_Article() +
			"', Nom= '" + this->getNom_Article() + "', Quantite_en_stock= '" + this->getStock_Article() + "', Designation= '" + this->getNat_Article() +
			"', Couleur= '" + this->getCouleur_Article() + "', Seuil_de_reapprovisionnement= '" + this->getSeuil_Reappro_Article() + "', TauxTVA = '" + this->getTauxTVA() + "' " +
			"WHERE(id_article = " + this->getId_Article() + ");";
	}

	String^ CL_map_article::DELETE(void)
	{
		return "DELETE FROM Article " +
			"WHERE(id_article = " + this->getId_Article() + ");";
	}

	void CL_map_article::setId_Article(int id_article)
	{
		if (id_article > 0)
		{
			this->id_article = id_article;
		}
	}

	void CL_map_article::setPrixHT(float PrixHT)
	{
		if (PrixHT > 0)
		{
			this->PrixHT = PrixHT;
		}
	}

	void CL_map_article::setRef_Article(String^ Ref_Article)
	{
		if (Ref_Article != "")
		{
			this->Ref_Article = Ref_Article;
		}
	}

	void CL_map_article::setNom_Article(String^Nom_Article)
	{
		if (Nom_Article != "")
		{
			this->Nom_Article = Nom_Article;
		}
	}

	void CL_map_article::setStock_Article(int Stock_Article)
	{
		if (Stock_Article > -1)
		{
			this->Stock_Article = Stock_Article;
		}
	}

	void CL_map_article::setNat_Article(String^ Nat_Article)
	{
		if (Nat_Article != "")
		{
			this->Nat_Article = Nat_Article;
		}
	}

	void CL_map_article::setCouleur_Article(String^ Couleur_Article)
	{
		if (Couleur_Article != "")
		{
			this->Couleur_Article = Couleur_Article;
		}
	}

	void CL_map_article::setSeuilReappro_Article(int SeuilReappro_Article)
	{
		if (SeuilReappro_Article > -1)
		{
			this->SeuilReappro_Article = SeuilReappro_Article;
		}
	}

	void CL_map_article::setTauxTVA(int TauxTVA)
	{
		if (TauxTVA > -1)
		{
			this->TauxTVA = TauxTVA;
		}
	}

	int CL_map_article::getId_Article(void)
	{
		return this->id_article;
	}

	float CL_map_article::getPrixHT(void)
	{
		return this->PrixHT;
	}

	String^ CL_map_article::getRef_Article(void)
	{
		return this->Ref_Article;
	}

	String^ CL_map_article::getNom_Article(void)
	{
		return this->Nom_Article;
	}

	int CL_map_article::getStock_Article(void)
	{
		return this->Stock_Article;
	}

	String^ CL_map_article::getNat_Article(void)
	{
		return this->Nat_Article;
	}

	String^ CL_map_article::getCouleur_Article(void)
	{
		return this->Couleur_Article;
	}

	int CL_map_article::getSeuil_Reappro_Article(void)
	{
		return this->SeuilReappro_Article;
	}

	int CL_map_article::getTauxTVA(void)
	{
		return this->TauxTVA;
	}
}