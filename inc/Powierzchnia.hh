#ifndef POWIERZCHNIA_HH
#define POWIERZCHNIA_HH

#include "Obiekt3D.hh"
#include <string>

using std::string;

class Powierzchnia : public Obiekt3D{
    protected:
    string kolor;

    public:
        int rysuj() const override;
        Powierzchnia() {}
        ~Powierzchnia() {}
};

#endif
