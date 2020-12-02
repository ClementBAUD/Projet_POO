#include "CL_map_date.h"

namespace NS_composants {
	CL_map_date::CL_map_date(void) {
		this->year = 0;
		this->month = 0;
		this->day = 0;
	}
	void CL_map_date::setIDclient(int id)
	{
		if (id > 0) {
			this->id_client = id;
		}
	}
	int CL_map_date::getIDclient(void)
	{
		return this->id_client;
	}
	void CL_map_date::setIDperso(int id)
	{
		if (id > 0) {
			this->id_personnel = 0;
		}
	}
	int CL_map_date::getIDperso(void)
	{
		return this->id_personnel;
	}
	void CL_map_date::setIDcomm(int id)
	{
		if (id > 0) {
			this->id_commande = id;
		}
	}
	int CL_map_date::getIDcomm(void)
	{
		return this->id_commande;
	}
	String^ CL_map_date::SELECTDATECLIENT(void)
	{
		return "SELECT Id_date, Jour, Mois, Annee " + "FROM Date WHERE id_client=" + this->getIDclient() + ";";
	}
	String^ CL_map_date::SELECTDATEPERSONNEL(void)
	{
		return "SELECT Id_date, Jour, Mois, Annee " + "FROM Date WHERE id_personne=" + this->getIDperso() + ";";
	}
	String^ CL_map_date::INSERTDATECLIENT(void)
	{
		return "INSERT INTO Date " +
			"(Jour, Mois, Annee,id_client) "
			+ "VALUES('" + this->getDay() + "', '" + this->getMonth() + "', '" + this->getYear() + "','" + this->getIDclient() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_date::INSERTDATEPERSONNEL(void)
	{
		return "INSERT INTO Date " +
			"(Jour, Mois, Annee,id_personnel) "
			+ "VALUES('" + this->getDay() + "', '" + this->getMonth() + "', '" + this->getYear() + "','" + this->getIDperso() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_date::UPDATEDATECLIENT(void)
	{
		return "UPDATE Date "
			+ "SET Jour = '" + this->getDay() + "', Mois = '" + this->getMonth() + "', Annee = '" + this->getYear() + "'" +
			"WHERE(id_adresse = " + this->getID() + "AND id_client= " + this->getIDclient() + ");";
	}
	String^ CL_map_date::UPDATEDATEPERSONNEL(void)
	{
		return "UPDATE Date "
			+ "SET Jour = '" + this->getDay() + "', Mois = '" + this->getMonth() + "', Annee = '" + this->getYear() + "'" +
			"WHERE(id_adresse = " + this->getID() + "AND id_personnel= " + this->getIDperso() + ");";
	}
	String^ CL_map_date::DELETEDATECLIENT(void)
	{
		return "DELETE FROM Date " +
			"WHERE(id_client=" + this->getIDclient() + ");";
	}
	String^ CL_map_date::DELETEDATEPERSONNEL(void)
	{
		return "DELETE FROM Date " +
			"WHERE(id_personnel=" + this->getIDperso() + ");";
	}
	String^ CL_map_date::SELECTDATECOMM(void)
	{
		return "SELECT type, Jour, Mois, Annee " + "FROM Date WHERE id_commande=" + this->getIDcomm() + ";";
	}
	String^ CL_map_date::INSERTDATECOMM(void)
	{
		return "INSERT INTO Date " +
			"(type, Jour, Mois, Annee,id_commande) "
			+ "VALUES('" +this->getType() + "','" + this->getDay() + "', '" + this->getMonth() + "', '" + this->getYear() + "','" + this->getIDcomm() + "');SELECT @@IDENTITY;";
	}
	String^ CL_map_date::UPDATEDATECOMM(void)
	{
		return "UPDATE Date "
			+ "SET Jour = '" + this->getDay() + "', Mois = '" + this->getMonth() + "', Annee = '" + this->getYear() + "'" +
			"WHERE(id_adresse = " + this->getID() + "AND id_commande= " + this->getIDcomm() + ");";
	}
	String^ CL_map_date::DELETEDATECOMM(void)
	{
		return "DELETE FROM Date " +
			"WHERE(id_commande=" + this->getIDcomm() + ");";
	}
	void CL_map_date::setDay(int day) {
		if ((day > 0) && (day < 32)) {
			this->day = day;
		}
	}
	void CL_map_date::setMonth(int month) {
		if ((month > 0) && (day < 13)) {
			this->month = month;
		}
	}
	void CL_map_date::setYear(int year) {
		if (year > 1800) {
			this->year = year;
		}
	}
	void CL_map_date::setID(int id) {
		if (id > 0) {
			this->id_date = id;
		}
	}
	int CL_map_date::getID(void) {
		return this->id_date;
	}
	int CL_map_date::getDay(void) {
		return this->day;
	}
	int CL_map_date::getMonth(void) {
		return this->month;
	}
	int CL_map_date::getYear(void) {
		return this->year;
	}
	String^ CL_map_date::getType(void)
	{
		return this->type;
	}
	void CL_map_date::setType(String^ type)
	{
		this->type = type;
	}
}