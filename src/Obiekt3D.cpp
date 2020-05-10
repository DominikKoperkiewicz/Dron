#include "Obiekt3D.hh"
#define _USE_MATH_DEFINES
#include <cmath>

void Obiekt3D::setOrientacjaZStopnie(double st)
{
    double rad = st*(M_PI/180);
    orientacjaZ[0][0] = cos(rad);
    orientacjaZ[0][1] = -sin(rad);
    orientacjaZ[0][2] = 0;
    orientacjaZ[1][0] = sin(rad);
    orientacjaZ[1][1] = cos(rad);
    orientacjaZ[1][2] = 0;
    orientacjaZ[2][0] = 0;
    orientacjaZ[2][1] = 0;
    orientacjaZ[2][2] = 1;
}
