#include "MacierzOb.hh"
#define _USE_MATH_DEFINES
#include <cmath>


void MacierzOb::setObrot(double k, char os)
{
    this->kat = k;
    double rad = k*(M_PI/180);

    switch(os)
    {
        case 'x': ;
            break;
        case 'y': ;
            break;
        case 'z':
            tab[0][0] = cos(rad);
            tab[0][1] = -sin(rad);
            tab[0][2] = 0.0;
            tab[1][0] = sin(rad);
            tab[1][1] = cos(rad);
            tab[1][2] = 0.0;
            tab[2][0] = 0.0;
            tab[2][1] = 0.0;
            tab[2][2] = 1.0;
    }
}


double MacierzOb::getKat()
{
    return this->kat;
}
