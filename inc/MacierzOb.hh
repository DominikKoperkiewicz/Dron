#ifndef MACIERZ_OB_HH
#define MACIERZ_OB_HH

#include "Macierz.hh"

class MacierzOb : public Macierz<double,3> {
    double kat;

public:
    MacierzOb() { this->kat = 0; };
    MacierzOb(double k, char os) : kat(k) {};
    ~MacierzOb() {};

    void setObrot(double k, char os);
    double getKat();
};

#endif
