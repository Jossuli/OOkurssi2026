#include <iostream>
#include <string>

using namespace std;

class Kirja
{
public:
    Kirja(string,string,int);
    void tulostaTiedot();

private:
    string nimi;
    string tekija;
    int sivumaara;
};

Kirja::Kirja (string N,string T,int S)
{
    nimi=N;
    tekija=T;
    sivumaara= S;
}
void Kirja:: tulostaTiedot()
{
    cout << "Kirjan nimi= " << nimi << endl;
    cout << "Kirjan tekija= " << tekija<< endl;
    cout << "Kirjan sivumaara= " << sivumaara << endl;
}

int main()
{
    cout << "Hello World!" << endl;

    Kirja olio("Punarotto","Ilkka Remes",512);
    olio.tulostaTiedot();
    return 0;
}
