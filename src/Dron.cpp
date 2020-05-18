#include "Dron.hh"
#define _USE_MATH_DEFINES
#include <cmath>

void Dron::przesun(Wektor3D W)
{
    pozycja = pozycja + W;
}


void Dron::obrocZ(double st)
{
    this->setOrientacjaZ(st + this->orientacjaZ.getKat());
}

void Dron::plyn(double odl, double k)
{
    Wektor3D W;
    W[0] = sin(orientacjaZ.getKat());
    W[1] = cos(orientacjaZ.getKat());
    W[2] = sin(k);
    this->cel = W;

    /*
    Wektor3D W;
    W[0] = sin(orientacjaZ.getKat());
    W[1] = cos(orientacjaZ.getKat());
    W[2] = sin(k);

    int a;
    Wektor3D poz = this->pozycja + W*odl;
    W = (W/100)*predkosc;
    for( ; abs( (this->pozycja-poz).dlugosc()) < 0.0001; )
    {
        this->przesun(W);
        a = this->rysuj();
        scena->erase_shape(a);

    }*/
}

void Dron::update()
{
    Wektor3D W;
    W = (this->pozycja - this->cel);
    W = ( W / W.dlugosc() ) * predkosc;
    this->pozycja += W;
}
