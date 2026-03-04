#include <iostream>
#include <vector>
#include <string>
#include "livre.h"
#include "revue.h"

int main() {
    std::vector<document*> maBibliotheque;
    int choix = 0;

    while (choix != 5) {
        std::cout << "\n1. Ajouter Livre | 2. Ajouter Revue | 3. Afficher | 4. Restituer | 5. Quitter\n";
        std::cout << "Choix : ";
        std::cin >> choix;

        if (choix == 1) {
            std::string t, a;
            int an;
            std::cout << "Titre : "; std::cin.ignore(); std::getline(std::cin, t);
            std::cout << "Annee : "; std::cin >> an;
            std::cout << "Auteur : "; std::cin.ignore(); std::getline(std::cin, a);
            
            maBibliotheque.push_back(new livre(t, an, a));
        } 
        else if (choix == 2) {
            std::string t;
            int an, n;
            std::cout << "Titre : "; std::cin.ignore(); std::getline(std::cin, t);
            std::cout << "Annee : "; std::cin >> an;
            std::cout << "Numero : "; std::cin >> n;

            maBibliotheque.push_back(new revue(t, an, n));
        } 
        else if (choix == 3) {
            for (int i = 0; i < maBibliotheque.size(); i++) {
                std::cout << "[" << i + 1 << "] "; 
                maBibliotheque[i]->afficherInfos();
            }
        } 
        else if (choix == 4) {
            int num;
            std::cout << "Numero du document a restituer : ";
            std::cin >> num;
    
            if (num > 0 && num <= maBibliotheque.size()) {
                static_cast<livre*>(maBibliotheque[num-1])->restituer();
                std::cout << "Document rendu !\n";
            }
        }
    }
    for (document* d : maBibliotheque) {
        delete d;
    }

    return 0;
}