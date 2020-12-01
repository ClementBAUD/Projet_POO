#pragma once
using namespace System;

namespace NS_composants {
	ref class CL_date
	{
	private:
		int day;
		int month;
		int year;
		int id_date;
		int id_commande;
	public:
		CL_date(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		void setID(int);
		void setIDcomm(int);
		int getIDcomm(void);
		int getID(void);
		int getDay(void);
		int getMonth(void);
		int getYear(void);
	};
}