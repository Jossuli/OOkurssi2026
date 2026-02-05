#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja Matti("Matti");
    Seuraaja Teppo("Teppo");
    Seuraaja Seppo ("Seppo");
    Matti.getNimi();
    Matti.paivitys("Pekalta");

    Notifikaattori N;

    N.lisaa(&Matti);//& Matti muuttujan osoite
    N.lisaa(&Teppo);
    N.lisaa(&Seppo);
    N.tulosta();
    N.poista(&Seppo);
    N.tulosta();
    N.postita("viestin.");
    N.poista(&Matti);

    N.postita("viestin.");

    return 0;
}
