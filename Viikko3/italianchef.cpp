#include "italianchef.h"
#include "chef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string italianChef): Chef(italianChef)
{
    chefName=italianChef;
    cout << "Italian chef " << chefName << endl;
}
ItalianChef::~ItalianChef()
{
    cout << "Italian destruktori " << chefName << endl;
}
bool ItalianChef::askSecret(string password2, int flour, int water)
{
    if(password2==password)
    {
        cout << "Password is ok!" << endl;
        makepizza(flour,water);
        return (true);
    }
    else {
        return (false);
    }
}
int ItalianChef::makepizza(int jauhoa, int vetta)
{
    jauhoa = jauhoa/5;
    vetta = vetta/5;
    int pizza = min(jauhoa,vetta); //ottaa kaksi lukua ja ottaa niistä pienemmän
    cout << "Chef " << chefName
         << " can make " << pizza << " portions of pizza" << endl;
    return (pizza);
}
