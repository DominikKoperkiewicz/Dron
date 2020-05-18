#include "Prostopadloscian.hh"

int Prostopadloscian::rysuj() const
{
    Wektor3D poz = pozycja;
    Wektor3D W = wymiary/2;

    Wektor3D tab[8];

    tab[0] = {-W[0], W[1], W[2] };
    tab[1] = {-W[0],-W[1], W[2] };
    tab[2] = { W[0],-W[1], W[2] };
    tab[3] = { W[0], W[1], W[2] };
    tab[4] = {-W[0], W[1],-W[2] };
    tab[5] = {-W[0],-W[1],-W[2] };
    tab[6] = { W[0],-W[1],-W[2] };
    tab[7] = { W[0], W[1],-W[2] };

    for(int i = 0; i < 8; i++)
    {
        tab[i] = orientacjaZ * tab[i];
        tab[i] = tab[i] + poz;
    }

    const std::vector<std::vector<Point3D> > points_map = {{
    drawNS::Point3D(tab[0][0], tab[0][1], tab[0][2] ),
    drawNS::Point3D(tab[1][0], tab[1][1], tab[1][2] ),
    drawNS::Point3D(tab[2][0], tab[2][1], tab[2][2] ),
    drawNS::Point3D(tab[3][0], tab[3][1], tab[3][2] )
    },{
    drawNS::Point3D(tab[4][0], tab[4][1], tab[4][2] ),
    drawNS::Point3D(tab[5][0], tab[5][1], tab[5][2] ),
    drawNS::Point3D(tab[6][0], tab[6][1], tab[6][2] ),
    drawNS::Point3D(tab[7][0], tab[7][1], tab[7][2] )
    }};

  int id = this->scena->draw_polyhedron(points_map,"blue");

  return id;
}
