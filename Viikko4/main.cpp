#include <iostream>
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

int main()
{
/*
    Pankkitili k("Kari");
    k.deposit(-10);
    k.deposit(100);
    k.withdraw(200);
    k.withdraw(50);
    cout << "saldo " << k.getBalance() << endl;

    Luottotili A("Pekka",500);
    A.deposit(-20);
    A.deposit(100);
    A.withdraw(300);
    A.withdraw(500);
    cout << "luottotilin " <<A.getBalance() << endl;
*/
    Asiakas B("Pekka",500);
    B.talletus(-20);
    B.nosto(100);
    cout << endl;
    B.luotonMaksu(300);
    B.luotonNosto(500);
    B.showSaldo();

    cout << endl;
    Asiakas C("Niina",500);
    C.talletus(100);
    cout << endl;
    C.tiliSiirto(20,B);
    return 0;
}
