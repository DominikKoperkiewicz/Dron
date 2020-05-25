#ifndef TAFLA_HH
#define TAFLA_HH

#include "Powierzchnia.hh"

class Tafla : public Powierzchnia{
public:
    Tafla(std::shared_ptr<drawNS::Draw3DAPI>& sc) { this->scena = sc; this->kolor = "blue"; this->pozycja = {0,0,2}; }
    ~Tafla() {}
};

#endif
