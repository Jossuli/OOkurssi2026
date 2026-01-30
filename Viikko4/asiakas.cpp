#include "asiakas.h"
#include <iostream>

Asiakas::Asiakas(string asiakas,double lRaja): kayttotili(asiakas), luottotili(asiakas,lRaja)
{
    nimi=asiakas;
    lRaja=1000;
    cout << "Pankkitilin asiakas on " << asiakas << endl;
}
string Asiakas::getNimi()
{
    cout << "Asiakkuus luotu " << nimi << endl;
    return nimi;
}
void Asiakas::showSaldo()
{
    cout << "Pankkitilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;

}
bool Asiakas::talletus(double maksu)
{
    if(maksu>0)
    {
        cout << "Talletus maksettu " << maksu << endl;
        return kayttotili.deposit(maksu);
    }
    else
    {
        cout << "Talletusta ei maksettu " << maksu << endl;
        return (false);
    }
}
bool Asiakas::nosto(double pyynto)
{
    if(pyynto>0)
    {
        cout << "Nosto annettu " << pyynto << endl;
        return kayttotili.withdraw(pyynto);
    }
    else
    {
        cout << "Nostoa ei anneta" << pyynto << endl;
        return (false);
    }
}
bool Asiakas::luotonMaksu(double veloitus)
{
    if(veloitus>0)
    {
        cout << "Veloitetaan " << veloitus << endl;
        return luottotili.deposit(veloitus);
    }
    else
    {
        cout << "Veloitusta ei makseta" << veloitus << endl;
        return (false);
    }
}
bool Asiakas:: luotonNosto(double nousee)
{
    if(nousee>0)
    {
        cout << "Luotto nostetaan " << nousee << endl;
        return luottotili.withdraw(nousee);
    }
    else
    {
        cout << "Luottoa ei myonneta" << nousee << endl;
        return (false);
    }
}
bool Asiakas::tiliSiirto(double tarkistus, Asiakas& ref)
{
    if(tarkistus <0 || tarkistus>kayttotili.getBalance())
    {
        cout << "Maksu ei onnistu " << tarkistus << endl;
        return false;
    }
    else
    {
        nosto(tarkistus);
        cout << getNimi() << " maksaa kaverille " << tarkistus << endl;
        ref.talletus(tarkistus);
        return true;
    }


}
