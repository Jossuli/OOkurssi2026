#include "pankkitili.h"
#include <iostream>


using namespace std;

Pankkitili::Pankkitili(string nimi)
{
    omistaja=nimi;
    saldo=0.0;
}
double Pankkitili::getBalance()
{
    return saldo;
}
bool Pankkitili::deposit(double talletus)
{
    if(talletus<0)
    {
        return false;
    }

    saldo = talletus + saldo;
    return true;
}
bool Pankkitili:: withdraw(double nosto)
{
    if(nosto < 0)
    {
        return false;
    }
    if(nosto > saldo)
    {
        return false;
    }

    saldo = saldo - nosto;
    return true;
}
