#include "CL_CAD.h"
namespace NS_composants {
	CL_CAD::CL_CAD(void) {
		this->RequeteSql = "NULL";
		this->ChaineConnexion = "Data Source=(localdb)\\MSSQLLocalDB;" +
			"Initial Catalog=BDDprojet;" +
			"Integrated Security=true;";
		this->Connection = gcnew SqlConnection(this->ChaineConnexion);
		this->Command = gcnew SqlCommand(this->RequeteSql, this->Connection);
		this->Command->CommandType = CommandType::Text;
	}

	int CL_CAD::actionRowsID(String^ RequeteSql) {
		int id;
		this->setSQL(RequeteSql);
		this->Command->CommandText = this->RequeteSql;
		this->Connection->Open();
		id = Convert::ToInt32(this->Command->ExecuteScalar());
		this->Connection->Close();
		return id;
	}

	void CL_CAD::actionRows(String^ RequeteSql) {
		this->setSQL(RequeteSql);
		this->Command->CommandText = this->RequeteSql;
		this->Connection->Open();
		this->Command->ExecuteNonQuery();
		this->Connection->Close();
	}

	DataSet^ CL_CAD::getRows(String^ RequeteSql, String^ dataTableName) {
		this->setSQL(RequeteSql);
		this->DataAdapter = gcnew SqlDataAdapter(this->Command);
		this->Command->CommandText = this->RequeteSql;
		this->dataset = gcnew DataSet();
		this->DataAdapter->Fill(this->dataset, dataTableName);
		return this->dataset;
	}

	void CL_CAD::setSQL(String^ RequeteSql) {
		if ((RequeteSql == "") || (RequeteSql == "NULL")) {
			this->RequeteSql = "NULL";
		}
		else {
			this->RequeteSql = RequeteSql;
		}
	}
}