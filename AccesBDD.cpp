#include "AccesBDD.h"
#include <string>
#include <iso646.h>
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
AccesBDD::AccesBDD()
{
   
        sqlConnHandle = NULL;
    sqlStmtHandle = NULL;
    //allocations
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
        deconextion();
    if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
        deconextion();
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
        deconextion();
    
}


void AccesBDD::deconextion()
{
    sqlConnHandle = NULL;
    sqlStmtHandle = NULL;
    //allocations
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
        deconextion();
    if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
        deconextion();
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
        deconextion();

    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
    SQLDisconnect(sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);

}

void AccesBDD::conextion(){
    
    cout << "Attempting connection to SQL Server...";
    cout << "\n";
    //connect to SQL Server  
    //I am using a trusted connection and port 14808
    //it does not matter if you are using default or named instance
    //just make sure you define the server name and the port
    //You have the option to use a username/password instead of a trusted connection
    //but is more secure to use a trusted connection

    switch (SQLDriverConnect(sqlConnHandle,
        NULL,
        //(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost, 1433;DATABASE=master;UID=username;PWD=password;",
        (SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost\\mssqlserver01;DATABASE=ProjetPOO;Trusted=true;",
        SQL_NTS,
        retconstring,
        1024,
        NULL,
        SQL_DRIVER_NOPROMPT)) {
    case SQL_SUCCESS:
        cout << "Successfully connected to SQL Server";
        cout << "\n";
        break;
    case SQL_SUCCESS_WITH_INFO:
        cout << "Successfully connected to SQL Server";
        cout << "\n";
        break;
    case SQL_INVALID_HANDLE:
        cout << "Could not connect to SQL Server";
        cout << "\n";
        deconextion();
    case SQL_ERROR:
        cout << "Could not connect to SQL Server";
        cout << "\n";
        deconextion();
    default:
        break;
    }
    //if there is a problem connecting then exit application
    SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);


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


Collections::Generic::List<String^>^ AccesBDD::effectuerRequeteSQL(const std::string requete)
{  //output
    conextion();
    Collections::Generic::List<String^>^ listee = gcnew Collections::Generic::List<String^>();
    
    cout << "\n";
    cout << "Executing T-SQL query...";
    cout << "\n";
    //if there is a problem executing the query then exit application
    //else display query result
    if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)requete.c_str(), SQL_NTS)) {
        cout << "Error querying SQL Server";
        cout << "\n";
        deconextion();
    }
    else {
        //declare output variable and pointer
        SQLCHAR buffer[SQL_RESULT_LEN];
        SQLLEN ptrSqlVersion;
        SQLGetData(sqlStmtHandle, 1, SQL_CHAR, buffer, SQL_RESULT_LEN, &ptrSqlVersion);

        // Convert SQLCHAR to String^
        String^ result = marshal_as<String^>(reinterpret_cast<const char*>(buffer));

        while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
            SQLGetData(sqlStmtHandle, 1, SQL_CHAR, buffer, SQL_RESULT_LEN, &ptrSqlVersion);
            //display query result
            cout << "\nQuery Result:\n\n";
            listee->Add(result);
            cout << buffer << endl;
        }
    }
    deconextion();
    return listee;
}











/*
 * 

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
    SQLSetConnectAttr(hdbc, , (SQLPOINTER)SQL_NT_AUTHENTICATION, SQL_IS_INTEGER);



    SQLCHAR* dsn = (SQLCHAR*)"YourDSN";

    // Utiliser l'authentification Windows intégrée
    SQLSetConnectAttr(hDbc, SQL_SERVER_AUTHENTICATION, (SQLPOINTER)SQL_NT_AUTHENTICATION, SQL_IS_INTEGER);

    // Établir la connexion
    SQLRETURN retcode = SQLConnect(hDbc, dsn, SQL_NTS, NULL, 0, NULL, 0);

 */