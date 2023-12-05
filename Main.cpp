#include <mysql_driver.h>
#include <mysql_connection.h>
#include <temp>

int main() {
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    // Créez une instance du pilote MySQL
    driver = sql::mysql::get_mysql_driver_instance();

    // Établissez une connexion à la base de données
    con = driver->connect("tcp://127.0.0.1:3306", "votre_nom_utilisateur", "votre_mot_de_passe");

    // Sélectionnez la base de données à utiliser
    con->setSchema("votre_base_de_donnees");

    // Effectuez des opérations sur la base de données...

    // Fermez la connexion
    delete con;

    return 0;
}