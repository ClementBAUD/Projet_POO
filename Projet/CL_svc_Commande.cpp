#include "CL_svc_Commande.h"
namespace NS_services {
	CL_svc_Commande::CL_svc_Commande(void)
	{
		this->cad = gcnew NS_composants::CL_CAD();
		this->commande = gcnew NS_composants::CL_map_commande();
		this->date = gcnew NS_composants::CL_map_date();
		this->dataset = gcnew Data::DataSet();
	}
	DataSet^ CL_svc_Commande::listeDate(int id_commande, String^ list)
	{
		this->dataset->Clear();
		this->date->setIDcomm(id_commande);
		this->cad->getRows(this->date->SELECTDATECOMM(), list);
		return dataset;
	}
	DataSet^ CL_svc_Commande::listeCommande(String^ ref, String^ list)
	{
		this->dataset->Clear();
		this->commande->setRefComm(ref);
		this->cad->getRows(this->commande->SELECT(), list);
		return dataset;
	}
	DataSet^ CL_svc_Commande::listeCommandeClient(int id_client, String^ list) {
		this->dataset->Clear();
		this->commande->setIDclient(id_client);
		this->cad->getRows(this->commande->SELECTALL(), list);
		return dataset;
	}
	int CL_svc_Commande::ajouterC(String^ refcomm, String^ refarticle, String^ nom,String^ nature, int tva, int quantite, float prix)
	{
		this->commande->setRefComm(refcomm);
		this->commande->setRefArt(refarticle);
		this->commande->setNomArt(nom);
		this->commande->setNature(nature);
		this->commande->setTVA(tva);
		this->commande->setQuantite(quantite);
		this->commande->setPrixHT(prix);
		this->cad->actionRows(this->commande->INSERT());
	}
	void CL_svc_Commande::modifierC(int id_comm, String^ refcomm, String^ refarticle, String^ nom,String^ nature, int tva, int quantite, float prix)
	{
		this->commande->setID(id_comm);
		this->commande->setRefComm(refcomm);
		this->commande->setRefArt(refarticle);
		this->commande->setNomArt(nom);
		this->commande->setNature(nature);
		this->commande->setTVA(tva);
		this->commande->setQuantite(quantite);
		this->commande->setPrixHT(prix);
		this->cad->actionRows(this->commande->UPDATE());
	}
	void CL_svc_Commande::supprimerC(int id_commande)
	{
		this->commande->setID(id_commande);
		this->cad->actionRows(this->commande->DELETE());
	}
	void CL_svc_Commande::supprimerCALL(String^ ref)
	{
		this->commande->setRefComm(ref);
		this->cad->actionRows(this->commande->DELETEALL());
	}
	int CL_svc_Commande::ajouterD(String^ type, int id_commande, int day,int month,int year)
	{
		this->date->setIDcomm(id_commande);
		this->date->setDay(day);
		this->date->setMonth(month);
		this->date->setYear(year);
		this->date->setType(type);
		this->cad->actionRows(this->date->INSERTDATECOMM());
	}
	void CL_svc_Commande::modifierD(int id_commande, int id_date, int day, int month, int year)
	{
		this->date->setIDcomm(id_commande);
		this->date->setID(id_date);
		this->date->setMonth(month);
		this->date->setYear(year);
		this->date->setDay(day);
		this->cad->actionRows(this->date->UPDATEDATECOMM());
	}
	void CL_svc_Commande::supprimerD(int id_commande)
	{
		this->date->setIDcomm(id_commande);
		this->cad->actionRows(this->date->DELETEDATECOMM());
	}
}