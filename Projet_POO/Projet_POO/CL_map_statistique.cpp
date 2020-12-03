#include "pch.h"
#include "CL_map_statistique.h"

namespace NS_composants
{
   
}

NS_Composants::CL_map_statistique::CL_map_statistique(void)
{
	this->id_stat = -1;
	this->panierMoyen = 0;
	this->chiffreAffaire = 0;
	this->montantTotal = 0;
	this->valeur_Comm_Stock = 0;
	this->valeur_Achat_Stock = 0;
	//commande = gcnew CL_map_commande;
}

void NS_Composants::CL_map_statistique::Calcul_panierMoyen(float)
{
	if (panierMoyen>0)
	{
		this->panierMoyen = panierMoyen;
	}
}

void NS_Composants::CL_map_statistique::Calcul_chiffreAffaire(float)
{
	if (chiffreAffaire>0)
	{
		this->chiffreAffaire = chiffreAffaire;
	}
}

void NS_Composants::CL_map_statistique::CalculmontantTotal(float)
{
	if (montantTotal>0)
	{
		this->montantTotal = montantTotal;
	}
}

void NS_Composants::CL_map_statistique::Calcul_valeurCommStock(float)
{
	if (valeur_Comm_Stock>0)
	{
		this->valeur_Comm_Stock = valeur_Comm_Stock;
	}
}

void NS_Composants::CL_map_statistique::Calcul_valeurAchatStock(float)
{
	if (valeur_Achat_Stock>0)
	{
		this->valeur_Achat_Stock = valeur_Achat_Stock;
	}
}
