#include "CL_map_personnel.h"

namespace NS_composants {
    CL_map_personnel::CL_map_personnel()
    {
        this->id_personne = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
        this->superieur = "RIEN";
    }
    String^ CL_map_personnel::SELECT(void)
    {
        return "SELECT * " + "FROM Personnel;";
    }
    String^ CL_map_personnel::INSERT(void)
    {
        return "INSERT INTO Personnel " +
            "(Nom, Prenom, Superieur_Hierarchique) " + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + this->getSuperieur() + "');SELECT @@IDENTITY;";
    }

    String^ CL_map_personnel::UPDATE(void)
    {
        return "UPDATE Personnel " +
            "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Superieur_Hierarchique = '" + this->getSuperieur() + "' " +
            "WHERE(Id_Personne = " + this->getId() + ");";
    }

    String^ CL_map_personnel::DELETE(void)
    {
        return "DELETE FROM Personnel " +
            "WHERE(Id_Personne = " + this->getId() + ");";
    }

    void CL_map_personnel::setID(int id_personne)
    {
        if (id_personne > 0)
        {
            this->id_personne = id_personne;
        }
    }

    void CL_map_personnel::setPrenom(String^ prenom)
    {
        if (prenom != "")
        {
            this->prenom = prenom;
        }
    }

    void CL_map_personnel::setNom(String^ nom)
    {
        if (nom != "")
        {
            this->nom = nom;
        }
    }

    void CL_map_personnel::setSuperieur(String^ superieur)
    {
        if (superieur != "")
        {
            this->superieur = superieur;
        }
    }

    int CL_map_personnel::getId(void)
    {
        return this->id_personne;
    }

    String^ CL_map_personnel::getNom(void)
    {
        return this->nom;
    }

    String^ CL_map_personnel::getPrenom(void)
    {
        return this->prenom;
    }

    String^ CL_map_personnel::getSuperieur(void)
    {
        return this->superieur;
    }
}