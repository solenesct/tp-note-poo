#ifndef LIVRE_H
#define LIVRE_H
#include "document.h"
#include "IEmpruntable.h"

class livre : public document, public IEmpruntable {
private:
    std::string auteur;
    bool estEmprunte;

public:
    livre(std::string t, int a, std::string aut);
    void afficherInfos() const override;
    void emprunter() override;
    void restituer() override;
};
#endif