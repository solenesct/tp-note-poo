#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>

class document {
protected:
    std::string titre;
    int annee;

public:
    document(std::string t, int a); 
    virtual ~document();
    virtual void afficherInfos() const = 0;
};
#endif