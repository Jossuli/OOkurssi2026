#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Pekka");
    chef.makeSalad(10);
    chef.makeSoup(3);

    ItalianChef Italin("Matti");
    Italin.askSecret("pizza",50,40);
    Italin.makeSalad(5);
    Italin.makeSoup(6);
    return 0;
}
