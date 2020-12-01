#pragma once
#include "CL_CAD.h"
#include "CL_map_TBARTICLE.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_Svc
{
	ref class CL_svc_gestionArticles
	{
	private:
		NS_Composants::CL_CAD^ cad;
		NS_Composants::CL_map_TBARTICLE^ article;
		DataSet^ ds;
	public:
		CL_svc_gestionArticles(void);
		DataSet^ listeArticle(String^);
		int ajouter(float, String^, String^, int, String^, String^, int, int);
		void modifier(int, float, String^, String^, int, String^, String^, int, int);
		void supprimer(int);
	};
}