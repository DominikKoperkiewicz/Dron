#include "Dron.hh"
#include <cmath>

void Dron::przesun(Wektor3D W)
{
    pozycja = pozycja + W;
}


void Dron::obroc(double st)
{
    setOrientacjaZStopnie(st );
}
