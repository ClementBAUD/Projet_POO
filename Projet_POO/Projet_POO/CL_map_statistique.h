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
    ref class CL_map_statistique
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
       //CL_map_commande^ commande;
        CL_map_statistique(void);
        void Calcul_panierMoyen(float);
        void Calcul_chiffreAffaire(float);
        void CalculmontantTotal(float);
        void Calcul_valeurCommStock(float);
        void Calcul_valeurAchatStock(float);

    };
}
