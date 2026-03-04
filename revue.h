#ifndef REVUE_H
#define REVUE_H
#include "document.h"
#include "IEmpruntable.h"

class revue : public document, public IEmpruntable {
private:
    int numero;
    bool estEmprunte;

public:
    revue(std::string t, int a, int n);
    void afficherInfos() const override;
    void emprunter() override;
    void restituer() override;
};
#endif