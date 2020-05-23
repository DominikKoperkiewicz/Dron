#include "Dron.hh"
#define _USE_MATH_DEFINES
#include <cmath>

void Dron::przesun(Wektor3D W)
{
    this->pozycja = this->pozycja + W;
}


void Dron::obrocZ(double st)
{
    this->setOrientacjaZ(st + this->orientacjaZ.getKat());
}

void Dron::plyn(double odl, double k)
{
    if(k < 90 && k > -90 && odl > 0 && odl < 10)
    {
        Wektor3D W;
        k = k*(M_PI/180);
        double rad = orientacjaZ.getKat()*M_PI/180;
        W[0] = sin(rad)*cos(k);
        W[1] = cos(rad)*cos(k);
        W[2] = sin(k);
        this->cel = this->pozycja + W*odl;


        this->rysuj();
        this->rysujWirniki();
        W = (W/20);

        double tmp = 20*odl;
        for(int i = 0; i < tmp; i++)
        {
            this->przesun(W);
            this->rysuj();
            this->rysujWirniki();
        }
        this->pozycja = this->cel;
        this->rysuj();
        this->rysujWirniki();
    }
}

void Dron::rotacjaZ(double k)
{
    double tmp = abs(k)/k;
    double wy = orientacjaZ.getKat() + k;

    this->rysuj();
    this->rysujWirniki();

    for(int i = 0; i < abs(k)/4 ; i++)
    {
        this->obrocZ(tmp*4);
        this->rysuj();
        this->rysujWirniki();
    }
    this->setOrientacjaZ(wy);
}

void Dron::rysujWirniki()
{
    Wektor3D W = {this->wymiary[0]/2 + 0.2,0,0};
    W = orientacjaZ*W;
    LewyWir.setPozycja(this->pozycja - W);
    PrawyWir.setPozycja(this->pozycja + W);
    LewyWir.setOrientacjaZ(orientacjaZ.getKat());
    PrawyWir.setOrientacjaZ(orientacjaZ.getKat());
    LewyWir.rysuj();
    PrawyWir.rysuj();
}
