#include "CL_map_Client.h"

namespace NS_composants {
    CL_map_Client::CL_map_Client()
    {
        this->num_client = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
    }
    String^ CL_map_Client::SELECT(void)
    {
        return "SELECT * " + "FROM Client;";
    }
    String^ CL_map_Client::INSERT(void)
    {
        return "INSERT INTO Client " +
            "(Nom, Prenom) " + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
    }

    String^ CL_map_Client::UPDATE(void)
    {
        return "UPDATE Client " +
            "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' " +
            "WHERE(Num_Client = " + this->getId() + ");";
    }

    String^ CL_map_Client::DELETE(void)
    {
        return "DELETE FROM Client " +
            "WHERE(Num_Client = " + this->getId() + ");";
    }
    void CL_map_Client::setID(int id)
    {
        if (id > 0)
        {
            this->num_client = id;
        }
    }
    void CL_map_Client::setPrenom(String^ prenom)
    {
        if (prenom != "")
        {
            this->prenom = prenom;
        }
    }
    void CL_map_Client::setNom(String^ nom)
    {
        if (nom != "")
        {
            this->nom = nom;
        }
    }
    int CL_map_Client::getId(void)
    {
        return this->num_client;
    }
    String^ CL_map_Client::getNom(void)
    {
        return this->nom;
    }
    String^ CL_map_Client::getPrenom(void)
    {
        return this->prenom;
    }
}