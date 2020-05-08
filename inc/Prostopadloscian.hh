#ifndef PROSTOPADLOSCIAN_HH
#define PROSTOPADLOSCIAN_HH

#include "Obiekt3D.hh"

class Prostopadloscian : public Obiekt3D{
    private:
        Wektor3D wymiary;

    public:
        void rysuj() override;

};

#endif
