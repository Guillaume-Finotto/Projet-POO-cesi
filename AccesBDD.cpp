#include "AccesBDD.h"



AccesBDD::AccesBDD()
{

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
    SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);


    SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);


    // IMPORTANT ////////////////////////////////////////

    SQLWCHAR* connectionString = L"DSN=servPOO;DRIVER={SQL Server};SERVER=localhost\\MSSQLSERVER01;DATABASE=ProjetPOO;Trusted_Connection=yes;";

    ////////////////////////////////////////////////////


    SQLRETURN ret = SQLDriverConnect(hDbc, NULL, connectionString, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);

    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        // Obtenir des informations détaillées sur l'erreur
        SQLWCHAR sqlState[6];
        SQLINTEGER nativeError;
        SQLWCHAR messageText[256];
        SQLSMALLINT textLength;

        SQLGetDiagRec(SQL_HANDLE_DBC, hDbc, 1, sqlState, &nativeError, messageText, sizeof(messageText), &textLength);

        std::wcerr << "Erreur lors de la connexion à la base de données." << std::endl;
        std::wcerr << "État SQL: " << sqlState << std::endl;
        std::wcerr << "Code d'erreur natif: " << nativeError << std::endl;
        std::wcerr << "Message d'erreur: " << messageText << std::endl;

        // Libération des ressources en cas d'erreur
        SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
        SQLFreeHandle(SQL_HANDLE_ENV, hEnv);

        std::cerr << "Erreur lors de la connexion à la base de données. : " << ret << std::endl;


    }

    deconextion();
}

void AccesBDD::deconextion()
{


    SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);
}

SQLHSTMT AccesBDD::conextion(){

   

    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
    SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);


    SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);


    // IMPORTANT ////////////////////////////////////////

    SQLWCHAR* connectionString = L"DSN=servPOO;DRIVER={SQL Server};SERVER=localhost\\MSSQLSERVER01;DATABASE=ProjetPOO;Trusted_Connection=yes;";

	////////////////////////////////////////////////////


    //SQLRETURN ret = SQLDriverConnect(hDbc, NULL, connectionString, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);



    SQLHENV henv;
    SQLHDBC hdbc;
    SQLHSTMT hstmt;

    // Allouer et initialiser l'environnement ODBC
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
    SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, SQL_IS_UINTEGER);

    // Allouer et initialiser la connexion ODBC
    SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);

    // Spécifier le DSN (Data Source Name) ou la chaîne de connexion (remplacez "YourDSN" par votre DSN)
    SQLCHAR* dsn = (SQLCHAR*)"YourDSN";

    // Utiliser l'authentification Windows intégrée
    SQLSetConnectAttr(hdbc, SQL_SERVER_AUTHENTICATION, (SQLPOINTER)SQL_NT_AUTHENTICATION, SQL_IS_INTEGER);



    SQLCHAR* dsn = (SQLCHAR*)"YourDSN";

    // Utiliser l'authentification Windows intégrée
    SQLSetConnectAttr(hDbc, SQL_SERVER_AUTHENTICATION, (SQLPOINTER)SQL_NT_AUTHENTICATION, SQL_IS_INTEGER);

    // Établir la connexion
    SQLRETURN retcode = SQLConnect(hDbc, dsn, SQL_NTS, NULL, 0, NULL, 0);


    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {

        std::cerr << "Erreur lors de la connexion à la base de données. : " << ret << std::endl;
        
    }

    SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt);
    if (true ){
        SQLWCHAR sqlState[8];
        SQLINTEGER nativeError;
        SQLWCHAR errMsg[SQL_MAX_MESSAGE_LENGTH];
        SQLSMALLINT msgLength;

        SQLError(hEnv, hDbc, hStmt, sqlState, &nativeError, errMsg, SQL_MAX_MESSAGE_LENGTH, &msgLength);

        std::cerr << "Erreur SQL : " << errMsg << std::endl;
    }
    
    // Libération des ressources
    return hStmt;
    SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);

}



AccesBDD::~AccesBDD()
{

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
    for(int i; i<valeurs.size();i++)
    {
        flatData = flatData + "'"+ valeurs[i]+"'" +",";

    }
    
    if (!flatData.empty()) {
        // Supprimer le dernier caractère
        flatData.erase(flatData.size() - 1);
    }
    
    try{

		effectuerRequeteSQL(string()+"INSERT INTO " + string(getref(table)) + " VALUES (" + flatData +");");
    }
    catch (const exception& e) { cout << "Une erreur est survenu lors de l'ajout d'un element dans la BDD :" << e.what() << endl; }

    
}

string AccesBDD::getref(Table a)
{
    
    return Tableref[a];
}



std::vector<std::string> AccesBDD::effectuerRequeteSQL(const std::string requete)
{
    SQLHSTMT  hStmt;
    hStmt = conextion();
    // Exemple de requête SQL (remplacez par votre propre requête)
    SQLWCHAR* query = (SQLWCHAR*)"SELECT * from personnel";
    //cout << std::string(reinterpret_cast<char*>(reinterpret_cast<wchar_t*>(query)));
    SQLRETURN ret;
    
    ret = SQLExecDirect(hStmt, query, SQL_NTS);
    cout << ret;
    // Récupération des résultats
    SQLCHAR buffer[256];
    SQLLEN indicator;
    SQLRETURN ret2 ;


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
        else {
            std::cout << "VIDE" << std::endl;
        }

        int out = SQLFetch(hStmt);
        // Répétez le processus pour d'autres colonnes si nécessaire
    }

    std::cout << ret2 << std::endl;
    deconextion();
    return retour;

}
