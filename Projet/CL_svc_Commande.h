#pragma once
#include "CL_CAD.h"
#include "CL_map_commande.h"
#include "CL_map_date.h"

namespace NS_services {
	ref class CL_svc_Commande
	{
	private:
		NS_composants::CL_map_date^ date;
		NS_composants::CL_map_commande^ commande;
		NS_composants::CL_CAD^ cad;
		Data::DataSet^ dataset;
	public:
		CL_svc_Commande(void);
		DataSet^ listeDate(int, String^);
		DataSet^ listeCommande(String^, String^);
		DataSet^ listeCommandeClient(int, String^);
		int ajouterC(String^, String^, String^,String^, int, int, float);
		void modifierC(int, String^, String^, String^, String^, int, int, float);
		void supprimerC(int);
		void supprimerCALL(String^);
		int ajouterD(String^,int, int, int, int);
		void modifierD(int, int, int, int, int);
		void supprimerD(int);
	};
}