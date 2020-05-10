#include "Dron.hh"
#include "Prostopadloscian.hh"
#include "Obiekt3D.hh"
#include "Macierz.hh"
#include "Wektor.hh"

#include <iostream>
#include "Dr3D_gnuplot_api.hh"


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

int main()
{
    std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-5,5,-5,5,-5,5,1000));
    api->change_ref_time_ms(-1);

    int a;
    char c;
    Wektor3D W;
    double S;

    Dron D;

    a = D.rysuj(api);
    api->redraw();

    while(c != 'q')
    {
        cin >> c;
        switch(c)
        {
            case 'p': cin >> W; D.przesun(W);
                break;
            case 'o': cin >> S; D.obroc(S);
        }

    api->erase_shape(a);
    a = D.rysuj(api);
    api->redraw();
    }

    //int a=api->draw_line(drawNS::Point3D(0,0,0),drawNS::Point3D(2,0,0));
/*
int a;
    Prostopadloscian p;
    a = p.rysuj(api);
    api->redraw();
    wait4key();

    api->erase_shape(a);
    p.setOrientacjaZStopnie(27);
    a = p.rysuj(api);
    api->redraw();
    wait4key();

    api->erase_shape(a);
    p.setOrientacjaZStopnie(82);
    a = p.rysuj(api);
    api->redraw();
    wait4key();
*/
    return 0;
}
