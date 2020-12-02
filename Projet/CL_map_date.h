#pragma once
using namespace System;

namespace NS_composants {
	ref class CL_map_date
	{
	private:
		int day;
		int month;
		int year;
		int id_date;
		int id_commande;
		int id_personnel;
		int id_client;
		String^ type;
	public:
		CL_map_date(void);
		void setIDclient(int);
		int getIDclient(void);
		void setIDperso(int);
		int getIDperso(void);
		void setIDcomm(int);
		int getIDcomm(void);
		String^ SELECTDATECLIENT(void);
		String^ SELECTDATEPERSONNEL(void);
		String^ INSERTDATECLIENT(void);
		String^ INSERTDATEPERSONNEL(void);
		String^ UPDATEDATECLIENT(void);
		String^ UPDATEDATEPERSONNEL(void);
		String^ DELETEDATECLIENT(void);
		String^ DELETEDATEPERSONNEL(void);
		String^ SELECTDATECOMM(void);
		String^ INSERTDATECOMM(void);
		String^ UPDATEDATECOMM(void);
		String^ DELETEDATECOMM(void);
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		void setID(int);
		int getID(void);
		int getDay(void);
		int getMonth(void);
		int getYear(void);
		String^ getType(void);
		void setType(String^);
	};
}