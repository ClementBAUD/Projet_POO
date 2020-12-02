#include "CL_svc_personne.h"

namespace NS_services
{
    CL_svc_personne::CL_svc_personne(void)
    {
        this->cad = gcnew NS_composants::CL_CAD();
        this->personnel = gcnew NS_composants::CL_map_personnel();
        this->client = gcnew NS_composants::CL_map_Client();
        this->date = gcnew NS_composants::CL_map_date();
        this->adresse = gcnew NS_composants::CL_map_Adresse();
        this->ds = gcnew Data::DataSet();
    }
    DataSet^ CL_svc_personne::listepersonnel(String^ dataTableName)
    {
        this->ds->Clear();
        this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);
        return this->ds;
    }
    DataSet^ CL_svc_personne::listeClient(String^ dataTableName)
    {
        this->ds->Clear();
        this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);
        return this->ds;
    }
    DataSet^ CL_svc_personne::listeDateC(int id_client, String^ dataTableName)
    {
        this->ds->Clear();
        this->date->setIDclient(id_client);
        this->ds = this->cad->getRows(this->date->SELECTDATECLIENT(), dataTableName);
        return this->ds;
    }
    DataSet^ CL_svc_personne::listeDateP(int id_perso, String^ dataTableName)
    {
        this->ds->Clear();
        this->date->setIDperso(id_perso);
        this->ds = this->cad->getRows(this->date->SELECTDATEPERSONNEL(), dataTableName);
        return this->ds;
    }
    DataSet^ CL_svc_personne::listeAdrC(int id_client, String^ dataTableName)
    {
        this->ds->Clear();
        this->adresse->setIDclient(id_client);
        this->ds = this->cad->getRows(this->adresse->SELECTADRCLIENT(), dataTableName);
        return this->ds;
    }
    DataSet^ CL_svc_personne::listeAdrP(int id_perso, String^ dataTableName)
    {
        this->ds->Clear();
        this->adresse->setIDperso(id_perso);
        this->ds = this->cad->getRows(this->adresse->SELECTADRPERSONNEL(), dataTableName);
        return this->ds;
    }
    int CL_svc_personne::ajouterC(String^ nom, String^ prenom)
    {
        int id_client;
        this->client->setNom(nom);
        this->client->setPrenom(prenom);
        id_client = this->cad->actionRowsID(this->client->INSERT());
        return id_client;
    }
    int CL_svc_personne::ajouterP(String^ nom, String^ prenom, String^ superieur)
    {
        int id_personnel;
        this->personnel->setNom(nom);
        this->personnel->setPrenom(prenom);
        this->personnel->setSuperieur(superieur);
        id_personnel = this->cad->actionRowsID(this->personnel->INSERT());
        return id_personnel;
    }
    int CL_svc_personne::ajouterDateC(int id_client, int day, int month, int year)
    {
        int id_dateC;
        this->date->setIDclient(id_client);
        this->date->setDay(day);
        this->date->setMonth(month);
        this->date->setYear(year);
        this->date->setType("Date d'anniversaire");
        id_dateC = this->cad->actionRowsID(this->date->INSERTDATECLIENT());
        return id_dateC;
    }
    int CL_svc_personne::ajouterDateP(int id_perso, int day, int month, int year)
    {
        int id_dateP;
        this->date->setIDperso(id_perso);
        this->date->setDay(day);
        this->date->setMonth(month);
        this->date->setYear(year);
        this->date->setType("Date d'embauche");
        id_dateP = this->cad->actionRowsID(this->date->INSERTDATEPERSONNEL());
        return id_dateP;
    }
    int CL_svc_personne::ajouterAdrC(int id_client, String^ adresse, String^ ville, String^ cp)
    {
        int id_adrC;
        this->adresse->setIDclient(id_client);
        this->adresse->setAdresse(adresse);
        this->adresse->setVille(ville);
        this->adresse->setCP(cp);

        id_adrC = this->cad->actionRowsID(this->adresse->INSERTADRCLIENT());
        return id_adrC;
    }
    int CL_svc_personne::ajouterAdrP(int id_perso, String^ adresse, String^ ville, String^ cp)
    {
        int id_adrP;
        this->adresse->setIDclient(id_perso);
        this->adresse->setAdresse(adresse);
        this->adresse->setVille(ville);
        this->adresse->setCP(cp);

        id_adrP = this->cad->actionRowsID(this->adresse->INSERTADRPERSONNEL());
        return id_adrP;
    }
    void CL_svc_personne::modifierC(int id_client, String^ nom, String^ prenom)
    {
        this->client->setID(id_client);
        this->client->setNom(nom);
        this->client->setPrenom(prenom);
        this->cad->actionRows(this->client->UPDATE());
    }
    void CL_svc_personne::modifierP(int id_perso, String^ nom, String^ prenom, String^ superieur)
    {
        this->personnel->setID(id_perso);
        this->personnel->setNom(nom);
        this->personnel->setPrenom(prenom);
        this->personnel->setSuperieur(superieur);
        this->cad->actionRows(this->personnel->UPDATE());
    }
    void CL_svc_personne::modifierDateC(int id_client, int id_date, int day, int month, int year)
    {
        this->date->setIDclient(id_client);
        this->date->setID(id_date);
        this->date->setDay(day);
        this->date->setMonth(month);
        this->date->setYear(year);
        this->cad->actionRows(this->date->UPDATEDATECLIENT());
    }
    void CL_svc_personne::modifierDateP(int id_perso, int id_date, int day, int month, int year)
    {
        this->date->setIDperso(id_perso);
        this->date->setID(id_date);
        this->date->setDay(day);
        this->date->setMonth(month);
        this->date->setYear(year);
        this->cad->actionRows(this->date->UPDATEDATEPERSONNEL());
    }
    void CL_svc_personne::modifierAdrC(int id_client, int id_adr, String^ adresse, String^ ville, String^ cp)
    {
        this->adresse->setIDclient(id_client);
        this->adresse->setID(id_adr);
        this->adresse->setAdresse(adresse);
        this->adresse->setVille(ville);
        this->adresse->setCP(cp);
        this->cad->actionRows(this->adresse->UPDATEADRCLIENT());
    }
    void CL_svc_personne::modifierAdrP(int id_perso, int id_adr, String^ adresse, String^ ville, String^ cp)
    {
        this->adresse->setIDclient(id_perso);
        this->adresse->setID(id_adr);
        this->adresse->setAdresse(adresse);
        this->adresse->setVille(ville);
        this->adresse->setCP(cp);
        this->cad->actionRows(this->adresse->UPDATEADRPERSONNEL());
    }
    void CL_svc_personne::supprimerC(int id_client)
    {
        this->client->setID(id_client);
        this->cad->actionRows(this->client->DELETE());
    }
    void CL_svc_personne::supprimerP(int id_perso)
    {
        this->personnel->setID(id_perso);
        this->cad->actionRows(this->personnel->DELETE());
    }
    void CL_svc_personne::supprimerDC(int id_client)
    {
        this->date->setIDclient(id_client);
        this->cad->actionRows(this->date->DELETEDATECLIENT());
    }
    void CL_svc_personne::supprimerDP(int id_perso)
    {
        this->date->setIDperso(id_perso);
        this->cad->actionRows(this->date->DELETEDATEPERSONNEL());
    }
    void CL_svc_personne::supprimerAC(int id_client)
    {
        this->adresse->setIDclient(id_client);
        this->cad->actionRows(this->adresse->DELETEADRCLIENT());
    }
    void CL_svc_personne::supprimerAP(int id_perso)
    {
        this->adresse->setIDperso(id_perso);
        this->cad->actionRows(this->adresse->DELETEADRPERSONNEL());
    }
}