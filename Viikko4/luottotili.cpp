#include "luottotili.h"
#include <iostream>

Luottotili::Luottotili(string a,double raja): Pankkitili(a)
{
    luottoRaja=raja;
}
bool Luottotili::deposit(double luottoTalletus)
{
    if(luottoTalletus <= 0 )
    {
        return false;
    }
    if(saldo + luottoTalletus > 0)
    {
        return false;
    }
    else
    {
        saldo=saldo + luottoTalletus;
        luottoRaja+=luottoTalletus;
        cout << "Luottotalletus on " << luottoTalletus << endl;
    }
    return true;
}
bool Luottotili::withdraw(double luottoNosto)
{
    // 1. negatiivinen nosto ei ole sallittu
    if (luottoNosto <= 0)
    {
        return false;
    }

    // 2. lasketaan miltä saldo näyttäisi
    double uusiSaldo = saldo - luottoNosto;

    // 3. tarkistetaan luottoraja
    if (uusiSaldo < -luottoRaja)
    {
        return false;
    }

    // 4. nosto sallittu
    saldo = uusiSaldo;
    return true;
}

