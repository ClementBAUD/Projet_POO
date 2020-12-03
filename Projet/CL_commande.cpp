#include "CL_commande.h"
namespace NS_composants {
	String^ CL_commande::SELECT(void)//On selectionne tous les champs de notre table TB_commande
	{
		return "SELECT *" +
			"FROM TB_commande;";
	}
	String^ CL_commande::INSERT(void) //On insert des données en utilisants les getteurs necessaire pour creer une commande
	{
		return "INSERT INTO TB_commande" +
			"(refComm,refArt,NomArt,Quantite,prixHT,tva)" +
			"VALUES('" + this->getRefComm() + "','" + this->getRefArt() + "','" + this->getNomArt() + "','" + this->getQuantite() + "','" + this->getPrixHT() + "','" + this->getTVA() + "');SELECT @@IDENTITY;";
	}
	String^ CL_commande::UPDATE(void) //On met à jour les données en utilisants les getteurs necessaire
	{
		return "UPDATE TB_commande" +
			"SET refComm = '" + this->getRefComm() + "', refArt='" + this->getRefArt() + "',NomArt='" + this->getNomArt() + "',Quantite='" + this->getQuantite() + "',prixHT='" + this->getPrixHT() + "',tva='" + this->getTVA() + "'" +
			"WHERE(id_commande=" + this->getID() + ");";
	}
	String^ CL_commande::DELETE(void) // On supprime une ligne complete en fonction de l'ID de la commande
	{
		return "DELETE FROM TB_commande" +
			"WHERE(id_commande=" + this->getID() + ");";
	}
	void CL_commande::setID(int id) {
		if (id > 0) {
			this->id_commande = id;
		}
	}
	void CL_commande::setNomArt(String^ nom) {
		this->NomArt = nom;
	}
	void CL_commande::setPrixHT(float prix) {
		if (prix >= 0) {
			this->PrixHT = prix;
		}
	}
	void CL_commande::setQuantite(int quantite) {
		this->Quantite = quantite;
	}
	void CL_commande::setRefArt(String^ ref) {
		this->refArt = ref;
	}
	void CL_commande::setRefComm(String^ ref) {
		this->refComm = ref;
	}
	void CL_commande::setTVA(float tva) {
		this->TauxTVA = tva;
	}
	int CL_commande::getID(void) {
		return this->id_commande;
	}
	String^ CL_commande::getNomArt(void) {
		return this->NomArt;
	}
	float CL_commande::getPrixHT(void) {
		return this->PrixHT;
	}
	int CL_commande::getQuantite(void) {
		return this->Quantite;
	}
	String^ CL_commande::getRefArt(void) {
		return this->refArt;
	}
	float CL_commande::getTVA(void) {
		return this->TauxTVA;
	}
	String^ CL_commande::getRefComm(void) {
		return this->refComm;
	}

}
