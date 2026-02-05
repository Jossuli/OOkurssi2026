#include "seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja(string name)
{
    nimi=name;
    cout << "Luodaan seuraaja "<< nimi << endl;
}
string Seuraaja:: getNimi()
{
    return nimi;
}
void Seuraaja::paivitys(string matka)
{
    cout << "Seuraaja " <<getNimi() << " sai " << matka << endl;
}

