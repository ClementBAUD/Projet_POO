#pragma once
#include "CL_map_Adresse.h"
#include "CL_map_date.h"

using namespace System;
namespace NS_composants
{
	ref class CL_map_personnel
	{
	private:
		int id_personne;
		String^ nom;
		String^ prenom;
		String^ superieur;
	public:
		CL_map_personnel();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setPrenom(String^);
		void setNom(String^);
		void setSuperieur(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getSuperieur(void);
	};
}