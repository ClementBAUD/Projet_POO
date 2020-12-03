#include <iostream>
#include "CL_CAD.h"
#include "CLStat.h"

using namespace System::Data::SqlClient;

CLStat::CLStat()
{


    this->id_stat = -1;
    this->panierMoyen = 0;
    this->ChiffreAffaire = 0;
    this->montantTotal = 0;
    this->valeur_Comm_Stock = 0;
    this->valeur_Achat_Stock = 0;
    commande= gcnew CL_map_commande;
}

float CLStat::Calcul_panierMoyen(float)
{
    commande->getPrix();
    commande->getQuantite();
    commande->getNomArt();

    //panierMoyen = "SELECT Prix, Quantité FROM Commande WHERE ID Client =" + this->PgetID + " , Id Article= " + this->getId_Article;
    CL_CAD^ o1 = gcnew CL_CAD();
    Dataset^ ds = o1-> getrows(panierMoyen);
}


float CLStat::Calcul_valeurCommStock(float)
{
    valeur_Comm_Stock= "SELECT SUM (Article.Prix * Article.Quantité_en_stock) FROM Article"
}

float CLStat::Calcul_valeurAchatStock(float)
{
    valeur_Achat_Stock= "SELECT (Article.Prix * Article.Seuil_de_réaprovisionnement) FROM Article"
}




float CLStat::CalculmontantTotal(float)
{
    montantTotal = "SELECT SUM (Commande_Article.Quantité * Article.Prix) FROM Commande_Article INNER JOIN Client ON Num_Client"
}

float CLStat::Calcul_chiffreAffaire(float)
{
    chiffreAffaire= "SELECT SUM (Commande_Article.Quantité * Article.Prix) FROM Commande_Article INNER JOIN Article ON Id_Article"
}

String^ CLStat::Afficher()
{
    return "SELECT Nom, Référence, Désignation FROM Article WHERE Quantité en stock = 0" 
}




void CL_map_Stat::PsetID(int id_stat)
{
    if (id_stat > 0)
    {
        this->id_stat = id_stat;
    }
}


String^ CLStat::INSERT(void)
{
    return "INSERT INTO Client " +
        "(PanierMoyen) " + "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');"
       + "WHERE(Num_Client = " + this->PgetId() + ");
}



