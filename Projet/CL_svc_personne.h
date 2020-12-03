#pragma once
#include "CL_CAD.h"
#include "CL_map_personnel.h"
#include "CL_map_Client.h"
#include "CL_map_Adresse.h"
#include "CL_map_date.h"

using namespace System;
using namespace System::Xml;
using namespace System::Data;
using namespace System::Data::SqlClient; 

namespace NS_services {
	ref class CL_svc_personne
	{
	private:
		NS_composants::CL_CAD^ cad;
		NS_composants::CL_map_personnel^ personnel;
		NS_composants::CL_map_Client^ client;
		NS_composants::CL_map_Adresse^ adresse;
		NS_composants::CL_map_date^ date;
		DataSet^ ds;

	public:
		CL_svc_personne();
		DataSet^ listeClient(String^);
		DataSet^ listepersonnel(String^);
		DataSet^ listeDateC(int, String^);
		DataSet^ listeDateP(int, String^);
		DataSet^ listeAdrC(int, String^);
		DataSet^ listeAdrP(int, String^);
		int ajouterC(String^, String^);
		int ajouterP(String^, String^, String^);
		int ajouterDateC(int, int, int, int,String^);
		int ajouterDateP(int, int, int, int);
		int ajouterAdrC(int, String^, String^, String^,String^);
		int ajouterAdrP(int, String^, String^, String^);
		void modifierC(int, String^, String^);
		void modifierP(int, String^, String^, String^);
		void modifierDateC(int, int, int, int, int);
		void modifierDateP(int, int, int, int, int);
		void modifierAdrC(int, int, String^, String^, String^);
		void modifierAdrP(int, int, String^, String^, String^);
		void supprimerC(int);
		void supprimerP(int);
		void supprimerDC(int);
		void supprimerDP(int);
		void supprimerAC(int);
		void supprimerAP(int);
	};
}