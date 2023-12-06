#include "AccesBDD.h"



AccesBDD::AccesBDD()
{
    std::string t;

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
    SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);


    SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);


    // IMPORTANT ////////////////////////////////////////

    SQLWCHAR* connectionString = (SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost\\MSSQLSERVER01;DATABASE=ProjetPOO;Trusted_Connection=yes;";

	////////////////////////////////////////////////////


    SQLRETURN ret = SQLDriverConnect(hDbc, NULL, connectionString, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);

    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        // Obtenir des informations d�taill�es sur l'erreur
        SQLWCHAR sqlState[6];
        SQLINTEGER nativeError;
        SQLWCHAR messageText[256];
        SQLSMALLINT textLength;

        SQLGetDiagRec(SQL_HANDLE_DBC, hDbc, 1, sqlState, &nativeError, messageText, sizeof(messageText), &textLength);

        std::wcerr << "Erreur lors de la connexion � la base de donn�es." << std::endl;
        std::wcerr << "�tat SQL: " << sqlState << std::endl;
        std::wcerr << "Code d'erreur natif: " << nativeError << std::endl;
        std::wcerr << "Message d'erreur: " << messageText << std::endl;

        // Lib�ration des ressources en cas d'erreur
        SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
        SQLFreeHandle(SQL_HANDLE_ENV, hEnv);

        std::cerr << "Erreur lors de la connexion � la base de donn�es. : " << ret << std::endl;
        std::cin >> t;
        std::cout << t;
        
    }

    // Cr�ation d'une d�claration
    SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt);

}

AccesBDD::~AccesBDD()
{
    // Lib�ration des ressources
    SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);
}

void AccesBDD::suprimerDansBDD(Table table, unsigned int ID)
{
    suprimerDansBDD(table, to_string(ID));
}

void AccesBDD::suprimerDansBDD(Table table, string ID)
{
    effectuerRequeteSQL("DELETE FROM "+ getref(table) +  " WHERE ID = " + ID);


}

void AccesBDD::ajouterDansBDD(Table table, vector<string> valeurs)
{

    std::string flatData = "";
    for(size_t i; i<valeurs.size();i++)
    {
        flatData = flatData + valeurs[i]+",";

    }
    if (!flatData.empty()) {
        // Supprimer le dernier caract�re
        flatData.erase(flatData.size() - 1);
    }
    
    try{
		effectuerRequeteSQL("INSERT INTO" + getref(table) + " VALUES (" + flatData +");");
    }
    catch (const exception& e) { cout << "Une erreur est survenu lors de l'ajout d'un element dans la BDD :" << e.what() << endl; }

    
}

string AccesBDD::getref(Table a)
{
    return Tableref[a];
}


std::vector<std::string> AccesBDD::effectuerRequeteSQL(std::string requete)
{

    // Exemple de requ�te SQL (remplacez par votre propre requ�te)
    SQLWCHAR* query = (SQLWCHAR*)requete.c_str();
    SQLExecDirect(hStmt, query, SQL_NTS);

    // R�cup�ration des r�sultats
    SQLCHAR buffer[1024];
    SQLLEN indicator;
    SQLRETURN ret2 = SQLFetch(hStmt);

    std::vector<std::string> retour;
    std::string ajout;

    while ((ret2 = SQLFetch(hStmt)) == SQL_SUCCESS || ret2 == SQL_SUCCESS_WITH_INFO) {

        SQLGetData(hStmt, 1, SQL_C_CHAR, buffer, sizeof(buffer), &indicator);
        std::cout << indicator << buffer << std::endl;
        if (indicator != SQL_NULL_DATA) {
            std::cout << "Colonne 1 : " << buffer << std::endl;
            ajout = std::string(reinterpret_cast<char*>(buffer));
            retour.push_back(ajout);
        }
        int out = SQLFetch(hStmt);
        // R�p�tez le processus pour d'autres colonnes si n�cessaire
    }



    return retour;

}
