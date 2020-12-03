#include "CL_svc_gestionArticles.h"

namespace NS_services
{
	CL_svc_gestionArticles::CL_svc_gestionArticles(void)
	{
		this->cad = gcnew NS_composants::CL_CAD();
		this->article = gcnew NS_composants::CL_map_article();
		this->ds = gcnew Data::DataSet();
	}
	DataSet^ CL_svc_gestionArticles::listeArticle(String^ dataTableName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->article->SELECT(), dataTableName);
		return this->ds;
	}
	DataSet^ CL_svc_gestionArticles::articleunite(int id_article, String^ dataTableName) {
		this->ds->Clear();
		this->article->setId_Article(id_article);
		this->ds = this->cad->getRows(this->article->SELECTONE(), dataTableName);
		return this->ds;
	}
	int CL_svc_gestionArticles::ajouter(int PrixHT, String^ Ref_Article, String^ Nom_Article, int Stock_Article, String^ Nat_Article, String^ Couleur_Article, int SeuilReappro_Article, int TauxTVA)
	{
		int id_Article;
		this->article->setPrixHT(PrixHT);
		this->article->setRef_Article(Ref_Article);
		this->article->setNom_Article(Nom_Article);
		this->article->setStock_Article(Stock_Article);
		this->article->setNat_Article(Nat_Article);
		this->article->setCouleur_Article(Couleur_Article);
		this->article->setSeuilReappro_Article(SeuilReappro_Article);
		this->article->setTauxTVA(TauxTVA);
		id_Article = this->cad->actionRowsID(this->article->INSERT());
		return id_Article;
	}
	void CL_svc_gestionArticles::modifier(int id_Article, int PrixHT, String^ Ref_Article, String^ Nom_Article, int Stock_Article, String^ Nat_Article, String^ Couleur_Article, int SeuilReappro_Article, int TauxTVA)
	{
		this->article->setId_Article(id_Article);
		this->article->setPrixHT(PrixHT);
		this->article->setRef_Article(Ref_Article);
		this->article->setNom_Article(Nom_Article);
		this->article->setStock_Article(Stock_Article);
		this->article->setNat_Article(Nat_Article);
		this->article->setCouleur_Article(Couleur_Article);
		this->article->setSeuilReappro_Article(SeuilReappro_Article);
		this->article->setTauxTVA(TauxTVA);
		this->cad->actionRows(this->article->UPDATE());
	}
	void CL_svc_gestionArticles::supprimer(int id_Article)
	{
		this->article->setId_Article(id_Article);
		this->cad->actionRows(this->article->DELETE());
	}
	void CL_svc_gestionArticles::quantiteVendu(int id_article, int quantite) {
		this->article->setId_Article(id_article);
		this->article->setVendu(quantite);
		this->cad->actionRows(this->article->UPDATESTOCK());
	}
}