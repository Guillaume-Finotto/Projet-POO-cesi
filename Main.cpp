#include <mysql_driver.h>
#include <mysql_connection.h>
#include <temp>

int main() {
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    // Cr�ez une instance du pilote MySQL
    driver = sql::mysql::get_mysql_driver_instance();

    // �tablissez une connexion � la base de donn�es
    con = driver->connect("tcp://127.0.0.1:3306", "votre_nom_utilisateur", "votre_mot_de_passe");

    // S�lectionnez la base de donn�es � utiliser
    con->setSchema("votre_base_de_donnees");

    // Effectuez des op�rations sur la base de donn�es...

    // Fermez la connexion
    delete con;

    return 0;
}