#ifndef WIRNIK_HH
#define WIRNIK_HH

#include "Obiekt3D.hh"

class Wirnik : public Obiekt3D{
    protected:
        Wektor3D wymiary;

    public:
        int rysuj() const override;
        Wirnik(std::shared_ptr<drawNS::Draw3DAPI>& sc) : wymiary{1,1,1} { this->scena = sc; }
        ~Wirnik(){}


};

#endif
