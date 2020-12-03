#include "pch.h"
#include "cl_svc_GestionStatistique.h"
#include "CL_map_statistique.h"
#include "CL_map_commande.h"
#include "CL_map_Client.h"
#include "CL_date.h"
#include "CL_map_article.h"

namespace NS_Svc {
    cl_svc_GestionStatistique::cl_svc_GestionStatistique(void)
    {
        //this->cad = gcnew NS_composants::CL_CAD();
        //this->statistique = gcnew NS_composants::CL_map_statistique();
        this->ds = gcnew Data::DataSet();
    }

    void cl_svc_GestionStatistique::CalculmontantTotal(float)
    {
        throw gcnew System::NotImplementedException();
    }

    void cl_svc_GestionStatistique::Calcul_panierMoyen(float)
    {
        throw gcnew System::NotImplementedException();
    }

    void cl_svc_GestionStatistique::Calcul_chiffreAffaire(float)
    {
        throw gcnew System::NotImplementedException();
    }

    void cl_svc_GestionStatistique::Calcul_valeurCommStock(float)
    {
        throw gcnew System::NotImplementedException();
    }

    void cl_svc_GestionStatistique::Calcul_valeurAchatStock(float)
    {
        throw gcnew System::NotImplementedException();
    }

}