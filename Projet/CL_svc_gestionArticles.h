#pragma once
#include "CL_CAD.h"
#include "CL_map_article.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
namespace NS_services
{
	ref class CL_svc_gestionArticles
	{
	private:
		NS_composants::CL_CAD^ cad;
		NS_composants::CL_map_article^ article;
		DataSet^ ds;
	public:
		CL_svc_gestionArticles(void);
		DataSet^ listeArticle(String^);
		DataSet^ articleunite(int, String^);
		int ajouter(int, String^, String^, int, String^, String^, int, int);
		void modifier(int, int, String^, String^, int, String^, String^, int, int);
		void supprimer(int);
	};
}