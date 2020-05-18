#include "Powierzchnia.hh"

int Powierzchnia::rysuj() const
{
    Wektor3D tab[25];
    Wektor3D poz = this->pozycja;

    const std::vector<std::vector<Point3D> > points_map = {{
    drawNS::Point3D(poz[0]-5, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]-4, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]-3, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]-2, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]-1, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]  , poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]+1, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]+2, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]+3, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]+4, poz[1]-5, poz[2]),
    drawNS::Point3D(poz[0]+5, poz[1]-5, poz[2])
    },{
    drawNS::Point3D(poz[0]-5, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]-4, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]-3, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]-2, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]-1, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]  , poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]+1, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]+2, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]+3, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]+4, poz[1]+5, poz[2]),
    drawNS::Point3D(poz[0]+5, poz[1]+5, poz[2])
    }};


  int id = this->scena->draw_surface(points_map, this->kolor);

  return id;
}
