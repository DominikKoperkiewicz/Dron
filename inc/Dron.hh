#ifndef DRON_HH
#define DRON_HH

#include "Prostopadloscian.hh"
#include "Interfejs.hh"

class Dron : public Prostopadloscian, public Interfejs {
public:
    Dron() { wymiary = {1.7,1.5,1}; }
    ~Dron() {}

    void przesun(Wektor3D W);
    void obroc(double st);
};

#endif
