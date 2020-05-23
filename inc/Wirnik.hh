#ifndef WIRNIK_HH
#define WIRNIK_HH

#include "Obiekt3D.hh"

class Wirnik : public Obiekt3D{
    protected:
        Wektor3D wymiary;

    public:
        void rysuj() override;
        Wirnik() : wymiary{0.6,0.6,0.6} {}
        Wirnik(std::shared_ptr<drawNS::Draw3DAPI>& sc) : wymiary{0.6,0.6,0.6} { this->scena = sc; }
        ~Wirnik(){}


};

#endif
