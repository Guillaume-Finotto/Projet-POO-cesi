#pragma once

#pragma once

#include <vector>
#include <memory>
#include <msclr/marshal_cppstd.h>

    using namespace System::Data;
    using namespace System::Data::SqlClient;

    using namespace System;

    ref class AccesBDD
    {
    public:
        AccesBDD();
        ~AccesBDD();

        void executerRequeteSQL(String^ requete);

    private:
        String^ rq_sql = "RIEN"; // ou ""
        String^ cnx = "Data Source=Guillaumef\\mssqlserver01;" +
            "Initial Catalog=" + "ProjetPOO" + ";" +
            "Persist Security Info=True;" +
            "User ID=ClientCPP;" +
            "Password=pass";
        SqlConnection^ CNX_ = gcnew SqlConnection(cnx);
        SqlCommand^ CMD_ = gcnew SqlCommand(rq_sql, this->CNX_);

    };


    //int __clrcall WinMain(array<String^>^ args)
    //{
    //
    //	std::cout << "eee";
    //	Application::EnableVisualStyles();
    //	Application::SetCompatibleTextRenderingDefault(false);
    //	EIA2MININFPOOP6::MyForm mainFRM;
    //	Application::Run(% mainFRM);
    //}