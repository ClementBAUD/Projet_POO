#pragma once

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_composants {
	ref class CL_CAD
	{
	private:
		String^ ChaineConnexion;
		String^ RequeteSql;
		SqlConnection^ Connection;
		SqlCommand^ Command;
		SqlDataAdapter^ DataAdapter;
		DataSet^ dataset;
		void setSQL(String^);
	public:
		CL_CAD(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);
	};
}