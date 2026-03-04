#ifndef IEMPRUNTABLE_H
#define IEMPRUNTABLE_H

class IEmpruntable {
public:
    virtual ~IEmpruntable() {}
    virtual void emprunter() = 0;
    virtual void restituer() = 0;
};
#endif