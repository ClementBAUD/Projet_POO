#include "pch.h"
#include "CL_map_TBARTICLE.h"

namespace NS_Composants
{
	CL_map_TBARTICLE::CL_map_TBARTICLE(void)
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

	String^ CL_map_TBARTICLE::SELECT(void)
	{
		return "SELECT PrixHT, Ref_Article, Nom_Article, Stock_Article, Nat_Article, Couleur_Article, SeuilReappro_Article, TauxTVA  " +
			"FROM TB_ARTICLE;";
	}

	String^ CL_map_TBARTICLE::INSERT(void)
	{
		return "INSERT INTO TB_ARTICLE " +
			"(Id_Article, PrixHT, Ref_Article, Nom_Article, Stock_Article, Nat_Article, Couleur_Article, SeuilReappro_Article, tauxTVA) " +
			"VALUES('" + this->getId_Article() + "', '" + this->getRef_Article() + "', '" + this->getNom_Article() + "', '" +
			this->getStock_Article() + "', '" + this->getNat_Article() + "', '" + this->getCouleur_Article() + "', '" +
			this->getSeuil_Reappro_Article() + this->getTauxTVA() + "');SELECT @@IDENTITY;";
	}

	String^ CL_map_TBARTICLE::UPDATE(void)
	{
		return "UPDATE TB_Article " +
			"SET Id_article = '" + this->getId_Article() + "', PrixHT = '" + this->getPrixHT() + "', Ref_Article = '" + this->getRef_Article() +
			"', Nom_Article = '" + this->getNom_Article() + "', Stock_Article = '" + this->getStock_Article() + "', Nat_Article = '" + this->getNat_Article() +
			"', Couleur_Article = '" + this->getCouleur_Article() + "', SeuilReappro_Article = '" + this->getSeuil_Reappro_Article() + "', TauxTVA = '" + this->getTauxTVA() + "' " +
			"WHERE(id_Article = " + this->getId_Article() + ");";
	}

	String^ CL_map_TBARTICLE::DELETE(void)
	{
		return "DELETE FROM TB_ARTICLE " +
			"WHERE(id_personne = " + this->getId_Article() + ");";
	}

	void CL_map_TBARTICLE::setId_Article(int)
	{
		if (id_article > 0)
		{
			this->id_article = id_article;
		}
	}

	void CL_map_TBARTICLE::setPrixHT(float)
	{
		if (PrixHT > 0)
		{
			this->PrixHT = PrixHT;
		}
	}

	void CL_map_TBARTICLE::setRef_Article(String^)
	{
		if (Ref_Article != "")
		{
			this->Ref_Article = Ref_Article;
		}
	}

	void CL_map_TBARTICLE::setNom_Article(String^)
	{
		if (Nom_Article != "")
		{
			this->Nom_Article = Nom_Article;
		}
	}

	void CL_map_TBARTICLE::setStock_Article(int)
	{
		if (Stock_Article > -1)
		{
			this->Stock_Article = Stock_Article;
		}
	}

	void CL_map_TBARTICLE::setNat_Article(String^)
	{
		if (Nat_Article != "")
		{
			this->Nat_Article = Nat_Article;
		}
	}

	void CL_map_TBARTICLE::setCouleur_Article(String^)
	{
		if (Couleur_Article != "")
		{
			this->Couleur_Article = Couleur_Article;
		}
	}

	void CL_map_TBARTICLE::setSeuilReappro_Article(int)
	{
		if (SeuilReappro_Article > -1)
		{
			this->SeuilReappro_Article = SeuilReappro_Article;
		}
	}

	void CL_map_TBARTICLE::setTauxTVA(int)
	{
		if (TauxTVA > -1)
		{
			this->TauxTVA = TauxTVA;
		}
	}

	int CL_map_TBARTICLE::getId_Article(void)
	{
		return this->id_article;
	}

	float CL_map_TBARTICLE::getPrixHT(void)
	{
		return this->PrixHT;
	}

	String^ CL_map_TBARTICLE::getRef_Article(void)
	{
		return this->Ref_Article;
	}

	String^ CL_map_TBARTICLE::getNom_Article(void)
	{
		return this->Nom_Article;
	}

	int CL_map_TBARTICLE::getStock_Article(void)
	{
		return this->Stock_Article;
	}

	String^ CL_map_TBARTICLE::getNat_Article(void)
	{
		return this->Nat_Article;
	}

	String^ CL_map_TBARTICLE::getCouleur_Article(void)
	{
		return this->Couleur_Article;
	}

	int CL_map_TBARTICLE::getSeuil_Reappro_Article(void)
	{
		return this->SeuilReappro_Article;
	}

	int CL_map_TBARTICLE::getTauxTVA(void)
	{
		return this->TauxTVA;
	}
}