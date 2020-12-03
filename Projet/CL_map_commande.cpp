#include "CL_map_commande.h"
namespace NS_composants {
	CL_map_commande::CL_map_commande(void) {
		this->id_commande = -1;
		this->id_client = -1;
		this->refComm = "";
		this->refArt = "";
		this->NomArt = "";
		this->Nature = "";
		this->Quantite = 0;
		this->PrixHT = 0;
		this->TauxTVA = 0;
	}
	String^ CL_map_commande::SELECTALL(void) {
		return "SELECT *" +
			"FROM Commande WHERE Num_Client=" + this->getIDclient() + ";";
	}
	String^ CL_map_commande::SELECT(void)
	{
		return "SELECT * " +
			"FROM Commande WHERE (Reference='" + this->getRefComm() + "');";
	}
	String^ CL_map_commande::SELECTTOTAL(void) {
		return "SELECT PrixHT " +
			"FROM Commande WHERE(Reference='" + this->getRefComm() + "');";
	}
	String^ CL_map_commande::INSERT(void)
	{
		return "INSERT INTO Commande " +
			"(Id_article,Num_Client, reference,reference_Article,Nom_Article,Nature, Quantite, PrixHT,TauxTVA)" +
			"VALUES('" + this->getID_article() +"','"+ this->getIDclient() + "','" + this->getRefComm() + "','" + this->getRefArt() + "','" + this->getNomArt() + "','" +this->getNature() + "','" + this->getQuantite() + "','" + this->getPrixHT() + "','" + this->getTVA() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_commande::UPDATE(void)
	{
		return "UPDATE Commande " +
			"SET reference_Article='" + this->getRefArt() + "',Nom_Article='" + this->getNomArt() + "', Nature='" + this->getNature() + "',Quantite='" + this->getQuantite() + "',PrixHT='" + this->getPrixHT() + "',TauxTVA='" + this->getTVA() + "'" +
			"WHERE(Id=" + this->getID() + "AND reference='" + this->getRefComm() + "');";
	}
	String^ CL_map_commande::DELETE(void)
	{
		return "DELETE FROM Commande" +
			"WHERE(Id=" + this->getID() + ");";
	}
	String^  CL_map_commande::DELETEALL(void) {
		return "DELETE FROM Commande " +
			"WHERE(reference='" + this->getRefComm() + "');";
	}
	void CL_map_commande::setID(int id) {
		if (id > 0) {
			this->id_commande = id;
		}
	}
	void CL_map_commande::setNomArt(String^ nom) {
		this->NomArt = nom;
	}
	void CL_map_commande::setPrixHT(float prix) {
		if (prix >= 0) {
			this->PrixHT = prix;
		}
	}
	void CL_map_commande::setQuantite(int quantite) {
		this->Quantite = quantite;
	}
	void CL_map_commande::setRefArt(String^ ref) {
		this->refArt = ref;
	}
	void CL_map_commande::setRefComm(String^ ref) {
		this->refComm = ref;
	}
	void CL_map_commande::setTVA(int tva) {
		this->TauxTVA = tva;
	}
	int CL_map_commande::getID(void) {
		return this->id_commande;
	}
	String^ CL_map_commande::getNomArt(void) {
		return this->NomArt;
	}
	float CL_map_commande::getPrixHT(void) {
		return this->PrixHT;
	}
	int CL_map_commande::getQuantite(void) {
		return this->Quantite;
	}
	String^ CL_map_commande::getRefArt(void) {
		return this->refArt;
	}
	int CL_map_commande::getTVA(void) {
		return this->TauxTVA;
	}
	String^ CL_map_commande::getRefComm(void) {
		return this->refComm;
	}
	void CL_map_commande::setIDclient(int id) {
		if(id > 0) {
			this->id_client = id;
		}
	}
	int CL_map_commande::getIDclient(void) {
		return this->id_client;
	}
	void CL_map_commande::setNature(String^ nature) {
		this->Nature = nature;
	}
	String^ CL_map_commande::getNature(void) {
		return this->Nature;
	}
	void CL_map_commande::setIDarticle(int id) {
		if (id > 0) {
			this->id_article = id;
		}
	}
	int CL_map_commande::getID_article(void) {
		return this->id_article;
	}
}