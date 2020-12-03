#pragma once
#include "CL_map_commande.h"
#include "CL_map_article.h"
#include <string>

using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient;
namespace NS_Composants
{
	ref class CLStat
	{
	private:
		int id_stat;
		float panierMoyen;
		float chiffreAffaire;
		float montantTotal;
		float valeur_Comm_Stock;
		float valeur_Achat_Stock;
		float Prix;

	public:
		CLStat();
		float Calcul_panierMoyen(float);
		float Calcul_chiffreAffaire(float);
		float CalculmontantTotal(float);
		float Calcul_valeurCommStock(float);
		float Calcul_valeurAchatStock(float);
		String^ INSERT(void);
		String^ Afficher();
		CL_map_commande^ commande;

	};
}


