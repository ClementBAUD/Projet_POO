#include "CL_map_Adresse.h"

namespace NS_composants
{
    CL_map_Adresse::CL_map_Adresse()
    {
        this->id_adresse = -1;
        this->id_client = -1;
        this->id_personnel = -1;
        this->adresse = "RIEN";
        this->ville = "RIEN";
        this->cp = "RIEN";
    }

    void CL_map_Adresse::setID(int id_adresse)
    {
        if (id_adresse > 0)
        {
            this->id_adresse = id_adresse;
        }
    }
    int CL_map_Adresse::getId(void)
    {
        return this->id_adresse;
    }
    void CL_map_Adresse::setIDclient(int id)
    {
        if (id > 0) {
            this->id_client = id;
        }
    }
    int CL_map_Adresse::getIDclient(void)
    {
        return this->id_client;
    }
    void CL_map_Adresse::setIDperso(int id)
    {
        if (id > 0) {
            this->id_personnel = id;
        }
    }
    int CL_map_Adresse::getIDperso(void)
    {
        return this->id_personnel;
    }
    String^ CL_map_Adresse::SELECTADRCLIENT(void)
    {
        return "SELECT Id_Adresse, Adresse, Ville, CP " + "FROM Adresse WHERE id_client=" + this->getIDclient() + ";";
    }
    String^ CL_map_Adresse::SELECTADRPERSONNEL(void)
    {
        return "SELECT Id_Adresse, Adresse, Ville, CP " + "FROM Adresse WHERE id_personnel=" + this->getIDperso() + ";";
    }
    String^ CL_map_Adresse::INSERTADRCLIENT(void)
    {
        return "INSERT INTO Adresse " +
            "(Adresse, Ville, CP,id_client) " + "VALUES('" + this->getAdresse() + "', '" + this->getVille() + "', '" + this->getCP() + "','" + this->getIDclient() + "');SELECT @@IDENTITY;";
    }
    String^ CL_map_Adresse::INSERTADRPERSONNEL(void)
    {
        return "INSERT INTO Adresse " +
            "(Adresse, Ville, CP, id_personnel) " + "VALUES('" + this->getAdresse() + "', '" + this->getVille() + "', '" + this->getCP() + "','" + this->getIDperso() + "');SELECT @@IDENTITY;";
    }
    String^ CL_map_Adresse::UPDATEADRCLIENT(void)
    {
        return "UPDATE Adresse " +
            "SET Adresse = '" + this->getAdresse() + "', Ville = '" + this->getVille() + "', CP = '" + this->getCP() + "' " +
            "WHERE(id_adresse = " + this->getId() + "AND id_client= " + this->getIDclient() + ");";
    }
    String^ CL_map_Adresse::UPDATEADRPERSONNEL(void)
    {
        return "UPDATE Adresse " +
            "SET Adresse = '" + this->getAdresse() + "', Ville = '" + this->getVille() + "', CP = '" + this->getCP() + "' " +
            "WHERE(id_adresse = " + this->getId() + "AND id_personnel= " + this->getIDperso() + ");";
    }
    String^ CL_map_Adresse::DELETEADRCLIENT(void)
    {
        return "DELETE FROM Adresse " +
            "WHERE(id_client=" + this->getIDclient() + ");";
    }
    String^ CL_map_Adresse::DELETEADRPERSONNEL(void)
    {
        return "DELETE FROM Adresse " +
            "WHERE(id_personnel=" + this->getIDperso() + ");";
    }
    void CL_map_Adresse::setAdresse(String^ adresse)
    {
        if (adresse != "")
        {
            this->adresse = adresse;
        }
    }
    void CL_map_Adresse::setVille(String^ ville)
    {
        if (ville != "")
        {
            this->ville = ville;
        }
    }
    void CL_map_Adresse::setCP(String^ cp)
    {
        if (cp != "")
        {
            this->cp = cp;
        }
    }

    String^ CL_map_Adresse::getAdresse(void)
    {
        return this->adresse;
    }
    String^ CL_map_Adresse::getVille(void)
    {
        return this->ville;
    }
    String^ CL_map_Adresse::getCP(void)
    {
        return this->cp;
    }

}