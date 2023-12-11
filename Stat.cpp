#include "Stat.h"/*

Stat::Stat()
    : acceeBDD(std::make_unique<AccesBDD>())
{

    Stat::acceeBDD = &AccesBDD();




    // Initialisation par liste pour créer un nouvel objet AccesBDD
}

Stat::Stat(const AccesBDD& Bdd)
    : acceeBDD(std::make_unique<AccesBDD>(Bdd))
{
    // Initialisation par liste pour créer un nouvel objet AccesBDD avec une référence existante
}

float Stat::obtenirPanierMoyen()
{
    std::string requete = "SELECT AVG(Prix_commande) FROM commande;";
    std::vector<std::string> resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats.empty()) {
        return std::stof(resultats[0]);
    }
    else {
        return 0.0f;
    }
}

int Stat::obtenirCA(std::string mois, std::string annee)
{
    std::string requete = "SELECT SUM(Prix_commande) FROM commande WHERE MONTH(date_paiement) = " + mois + " AND YEAR(date_paiement) = " + annee + ";";
    std::vector<std::string> resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats.empty()) {
        return std::stoi(resultats[0]);
    }
    else {
        return 0;
    }
}

std::unique_ptr<Article[]> Stat::obtenirProduitsSousSeuil()
{
    std::string requete = "SELECT * FROM article WHERE qte_stock_actuel < seuil_reappro;";
    std::vector<std::string> resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats.empty()) {
        std::unique_ptr<Article[]> articles(new Article[resultats.size()]);

        for (size_t i = 0; i < resultats.size(); ++i) {
            articles[i].initialiserDepuisChaine(resultats[i]);
        }

        return articles;
    }
    else {
        return nullptr;
    }
}

std::unique_ptr<CL_Article[]> Stat::obtenirTop10()
{
    std::string requete = "SELECT IDarticle, sum(NombreArticle) FROM sousCommande GROUP BY IDarticle ORDER BY 2 DESC LIMIT 10; ";
    List<List<String^>^>^ resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats->ToArray()->Length != 0) {
        CL_Article^ articles = gcnew  CL_Article(acceeBDD,);

        for (size_t i = 0; i < resultats.size(); ++i) {
            articles[i].initialiserDepuisChaine(resultats[i]);
        }

        return articles;
    }
    else {
        return nullptr;
    }
}

std::unique_ptr<Article[]> Stat::obtenirFlop10()
{
    std::string requete = "SELECT IDarticle, sum(NombreArticle) FROM sousCommande GROUP BY IDarticle ORDER BY 2 ASC LIMIT 10;";
    std::vector<std::string> resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats.empty()) {
        std::unique_ptr<Article[]> articles(new Article[resultats.size()]);

        for (size_t i = 0; i < resultats.size(); ++i) {
            articles[i].initialiserDepuisChaine(resultats[i]);
        }

        return articles;
    }
    else {
        return nullptr;
    }
}

float Stat::obtenirPrixStock()
{
    std::string requete = "SELECT sum(prixTTC * qte_stock_actuel) FROM Article; ";
    std::vector<std::string> resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats.empty()) {
        return std::stof(resultats[0]);
    }
    else {
        return 0.0f;
    }
}

float Stat::obtenirCoutStock()
{
    std::string requete = "SELECT sum(PrixFournisseur * qte_stock_actuel) FROM Article; ";
    std::vector<std::string> resultats = acceeBDD->effectuerRequeteSQL(requete);
    if (!resultats.empty()) {
        return std::stof(resultats[0]);
    }
    else {
        return 0.0f;
    }
}
*/