#include "CL_map_commande.h"
namespace NS_composants {
	CL_map_commande::CL_map_commande(void) {
		this->id_commande = -1;
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
			"FROM TB_commande WHERE id_client=" + this->getIDclient() + ";";
	}
	String^ CL_map_commande::SELECT(void)
	{
		return "SELECT *" +
			"FROM TB_commande WHERE refComm=" + this->getRefComm() + ";";
	}
	String^ CL_map_commande::INSERT(void)
	{
		return "INSERT INTO TB_commande" +
			"(refComm,refArt,NomArt,Nature, Quantite,prixHT,tva)" +
			"VALUES('" + this->getRefComm() + "','" + this->getRefArt() + "','" + this->getNomArt() + "','" +this->getNature() + "'" + this->getQuantite() + "','" + this->getPrixHT() + "','" + this->getTVA() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_commande::UPDATE(void)
	{
		return "UPDATE TB_commande" +
			"SET refArt='" + this->getRefArt() + "',NomArt='" + this->getNomArt() + "', Nature='" + this->getNature() + "',Quantite='" + this->getQuantite() + "',prixHT='" + this->getPrixHT() + "',tva='" + this->getTVA() + "'" +
			"WHERE(id_commande=" + this->getID() + "AND refComm =" + this->getRefComm() + ");";
	}
	String^ CL_map_commande::DELETE(void)
	{
		return "DELETE FROM TB_commande" +
			"WHERE(id_commande=" + this->getID() + ");";
	}
	String^  CL_map_commande::DELETEALL(void) {
		return "DELETE FROM TB_commande " +
			"WHERE(refComm=" + this->getRefComm() + ");";
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
}