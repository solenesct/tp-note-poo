#include "livre.h"
#include <iostream>

livre::livre(std::string t, int a, std::string aut) 
    : document(t, a), auteur(aut), estEmprunte(false) {}

void livre::afficherInfos() const {
    std::cout << "Livre : " << titre << " (" << annee << ") par " << auteur << std::endl;
}

void livre::emprunter() { estEmprunte = true; }
void livre::restituer() { estEmprunte = false; }