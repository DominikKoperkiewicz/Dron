#include "Dron.hh"
#include "Prostopadloscian.hh"
#include "Wirnik.hh"
#include "Powierzchnia.hh"
#include "Tafla.hh"
#include "Dno.hh"
#include "Obiekt3D.hh"
#include "Macierz.hh"
#include "Wektor.hh"

#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include <unistd.h>

using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::cin;
using std::endl;


void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}

const double FPS = 1000 / 22;

int main()
{
    std::shared_ptr<drawNS::Draw3DAPI> scena(new APIGnuPlot3D(-5,5,-5,5,-5,5,1000));
    scena->change_ref_time_ms(-1);


    int a;
    Dno Dn(scena);
    Tafla taf(scena);
    Dron D(scena);

    Dn.rysuj();
    taf.rysuj();
    a = D.rysuj();
    scena->redraw();
        usleep(2000);

    wait4key();
    D.setPredkosc(0.01);
    D.plyn(2,30);

    wait4key();
    for(int i = 0; i < 400; i++)
    {
        scena->erase_shape(a);
        D.update();
        a = D.rysuj();
        scena->redraw();
        usleep(FPS);
    }
    wait4key();

    return 0;
}
