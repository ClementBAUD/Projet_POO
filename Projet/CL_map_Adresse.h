#pragma once

using namespace System;
namespace NS_composants
{
	ref class CL_map_Adresse
	{
	private:
		int id_adresse;
		String^ adresse;
		String^ ville;
		String^ cp;
		int id_client;
		int id_personnel;
	public:
		CL_map_Adresse();
		void setID(int);
		int getId(void);
		void setIDclient(int);
		int getIDclient(void);
		void setIDperso(int);
		int getIDperso(void);
		String^ SELECTADRCLIENT(void);
		String^ SELECTADRPERSONNEL(void);
		String^ INSERTADRCLIENT(void);
		String^ INSERTADRPERSONNEL(void);
		String^ UPDATEADRCLIENT(void);
		String^ UPDATEADRPERSONNEL(void);
		String^ DELETEADRCLIENT(void);
		String^ DELETEADRPERSONNEL(void);
		void setAdresse(String^);
		void setVille(String^);
		void setCP(String^);
		String^ getAdresse(void);
		String^ getVille(void);
		String^ getCP(void);
	};
}