#include "CL_date.h"

namespace NS_composants {
	CL_date::CL_date(void) {
		this->year = 0;
		this->month = 0;
		this->day = 0;
		this->id_commande = -1;
		this->id_date = -1;
	}
	void CL_date::setDay(int day) {
		if ((day > 0) && (day < 32)) {
			this->day = day;
		}
	}
	void CL_date::setMonth(int month) {
		if ((month > 0) && (day < 13)) {
			this->month = month;
		}
	}
	void CL_date::setYear(int year) {
		if (year > 1800) {
			this->year = year;
		}
	}
	void CL_date::setID(int id) {
		if (id > 0) {
			this->id_date = id;
		}
	}
	void CL_date::setIDcomm(int id) {
		if (id > 0) {
			this->id_commande = id;
		}
	}
	int CL_date::getIDcomm(void) {
		return this->id_commande;
	}
	int CL_date::getID(void) {
		return this->id_date;
	}
	int CL_date::getDay(void) {
		return this->day;
	}
	int CL_date::getMonth(void) {
		return this->month;
	}
	int CL_date::getYear(void) {
		return this->year;
	}
	String^ CL_date::SELECT(void) {
		return "SELECT * " +
			"FROM TB_date;";
	}
	String^ CL_date::UPDATE(void) {
		return "UPDATE TB_date " +
			"SET day = '" + this->getDay() + "',month='" + this->getMonth() + "',year='"+this->getYear()+"'" +
			"WHERE(id_date = " + this->getID() + ");";
	}
	String^ CL_date::INSERT(void) {
		return "INSERT INTO TB_date " +
			"(day,month,year,id_commande)" +
			"VALUES('" + this->getDay() + "','" + this->getMonth() + "','" + this->getYear();"','"+this->getIDcomm()+"');SELECT @@IDENTITY;";
	}
	String^ CL_date::DELETE(void) {
		return "DELETE FROM TB_date " +
			"WHERE id_date=" + this->getID() + "AND id_commande=" + this->getIDcomm()+ ";";
	}
}