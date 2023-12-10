#include "AccesBDD.h"

#include <codecvt>
#include <string>
#include <iso646.h>
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;

using namespace std;
#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000


AccesBDD::AccesBDD()
{
    sqlEnvHandle = NULL;
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



    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
    SQLDisconnect(sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);

}
// Inutiser 
void AccesBDD::conextion() {

    cout << "Attempting connection to SQL Server...";
    cout << "\n";

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
    effectuerRequeteSQL("DELETE FROM " + getref(table) + " WHERE ID = " + ID);


}

void AccesBDD::ajouterDansBDD(Table table, List<String^>^ valeurs)
{

    String^ flatData = "";
    for (int i; i < sizeof(valeurs); i++)
    {
        flatData = flatData + (String^)"'" + valeurs[i] + "'" + ",";

    }

    if (!flatData) {
        // Supprimer le dernier caract�re
        flatData->Remove((flatData->Length - 1));
    }

    try {

        effectuerRequeteSQL(string() + "INSERT INTO " + string(getref(table)) + " VALUES (" + marshal_as<std::string>(flatData) + ");");
    }
    catch (const exception& e) { cout << "Une erreur est survenu lors de l'ajout d'un element dans la BDD :" << e.what() << endl; }


}

string AccesBDD::getref(Table a)
{
    string tt[5] = { "personnel","client" ,"commande","article","sous_Commande" };
    
    return tt[a];
}



List<List<String^>^>^ AccesBDD::effectuerRequeteSQL(string reauete) {
    List<List<String^>^>^ listee = gcnew List<List<String^>^>();
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    std::wstring chaineWide = converter.from_bytes(reauete);

    // Allouer une nouvelle mémoire pour le wchar_t*
    wchar_t* chaineWidePtr = new wchar_t[chaineWide.length() + 1];
    std::wcscpy(chaineWidePtr, chaineWide.c_str());
    // Define handles and variables
    SQLHANDLE sqlConnHandle = NULL;
    SQLHANDLE sqlStmtHandle = NULL;
    SQLHANDLE sqlEnvHandle = NULL;
    SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];

    // Allocations
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
        goto COMPLETED;

    if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
        goto COMPLETED;

    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
        goto COMPLETED;

    // Output
    std::wcout << L"Attempting connection to SQL Server..." << std::endl;

    // Connect to SQL Server
    switch (SQLDriverConnect(sqlConnHandle,
        NULL,
        (SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost\\mssqlserver01;DATABASE=ProjetPOO;Trusted=true;",
        SQL_NTS,
        retconstring,
        1024,
        NULL,
        SQL_DRIVER_NOPROMPT)) {
    case SQL_SUCCESS:
    case SQL_SUCCESS_WITH_INFO:
        std::wcout << L"Successfully connected to SQL Server" << std::endl;
        break;
    case SQL_INVALID_HANDLE:
    case SQL_ERROR:
        std::wcout << L"Could not connect to SQL Server" << std::endl;
        goto COMPLETED;
    default:
        break;
    }

    // If there is a problem connecting, then exit the application
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
        goto COMPLETED;

    // Output
    std::wcout << L"Executing T-SQL query..." << std::endl;
    // Convertir std::string en wchar_t*
 


    SQLWCHAR* query = (SQLWCHAR*)chaineWidePtr;
    if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, query, SQL_NTS)) {
        std::wcout << L"Error executing SQL query" << std::endl;
        goto COMPLETED;
    }
    
    int columns;

    SQLRETURN ret = SQLNumResultCols(sqlStmtHandle, (SQLSMALLINT*)&columns);

    cout << "Handler" << sqlStmtHandle <<"retour" << ret;
    const int maxRows = 20;

    cout << *chaineWidePtr;
    delete chaineWidePtr;
    for (int rowNumber = 0; rowNumber < maxRows && SQLFetch(sqlStmtHandle) == SQL_SUCCESS;) {
        List<String^>^ row = gcnew List<String^>();
        rowNumber = rowNumber + 1;
        for (int i = 1; i <= columns; ++i) {
            cout << columns << endl;
            SQLCHAR buffer[600];
            SQLLEN ptrSqlVersion;
            SQLGetData(sqlStmtHandle, i, SQL_CHAR, buffer, 600, &ptrSqlVersion);
            std::cout << "temp "<< reinterpret_cast<const char*>(buffer);
            // Convertir S QLCHAR en String^
            String^ value = msclr::interop::marshal_as<String^>(reinterpret_cast<const char*>(buffer));
            row->Add(value);
        }

        listee->Add(row);
    }

COMPLETED:
    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
    SQLDisconnect(sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);

    return listee;
}
//pause the console window - exit when key is pressed

;/*
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
return listee;*/












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

    // Sp�cifier le DSN (Data Source Name) ou la cha�ne de connexion (remplacez "YourDSN" par votre DSN)
    SQLCHAR* dsn = (SQLCHAR*)"YourDSN";

    // Utiliser l'authentification Windows int�gr�e
    SQLSetConnectAttr(hdbc, , (SQLPOINTER)SQL_NT_AUTHENTICATION, SQL_IS_INTEGER);



    SQLCHAR* dsn = (SQLCHAR*)"YourDSN";

    // Utiliser l'authentification Windows int�gr�e
    SQLSetConnectAttr(hDbc, SQL_SERVER_AUTHENTICATION, (SQLPOINTER)SQL_NT_AUTHENTICATION, SQL_IS_INTEGER);

    // �tablir la connexion
    SQLRETURN retcode = SQLConnect(hDbc, dsn, SQL_NTS, NULL, 0, NULL, 0);

 */