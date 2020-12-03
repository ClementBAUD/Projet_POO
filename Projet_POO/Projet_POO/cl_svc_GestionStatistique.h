#pragma once
#include "CL_CAD.h"
#include "cl_svc_GestionStatistique.h"
#include "CL_map_statistique.h"
#include "CL_map_commande.h"
#include "CL_map_Client.h"
#include "CL_date.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_Svc {

	ref class cl_svc_GestionStatistique
	{
	private:
		NS_Composants::CL_map_statistique^ statistique;
		//NS_Composants::CL_CAD^ cad;
		DataSet^ ds;
		NS_composants::CL_map_commande^ commande;
		NS_composants::CL_map_Client^ client;
		NS_composants::CL_map_date^ date;
		DataSet^ ds;

	public:
		cl_svc_GestionStatistique(void);
		void CalculmontantTotal(float);
		void Calcul_panierMoyen(float);
		void Calcul_chiffreAffaire(float);
		void Calcul_valeurCommStock(float);
		void Calcul_valeurAchatStock(float);
	};


}

