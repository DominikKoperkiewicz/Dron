#ifndef OBIEKT3D_HH
#define OBIEKT3D_HH

#include "Wektor.hh"
#include "Macierz.hh"

class Obiekt3D{
    protected:
        Wektor3D pozycja;
        MacierzOb orientacjaX;
        MacierzOb orientacjaY;
        MacierzOb orientacjaZ;

    public:/*
        Obiekt3D();
        ~Obiekt3D();*/
        virtual void rysuj() = 0;

};

#endif
