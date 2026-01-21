#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string kokki)
{
    chefName = kokki;
    cout << "Chef " << chefName << endl;
}
Chef::~Chef()
{
    cout << "Chef destruktori " << chefName << endl;
}
string Chef::getName()
{
    return chefName;
}
int Chef::makeSalad(int viisiAinesta)
{
    cout << "Chef " << chefName << " with " << viisiAinesta
         << " can make " << (viisiAinesta/5) << " portions " << endl;
    return (viisiAinesta/5);
}
int Chef::makeSoup(int kolmeAinesta)
{
    cout << "Chef " << chefName << " with " << kolmeAinesta
         << " can make " << (kolmeAinesta/3) << " portion " << endl;
    cout << endl;
    return (kolmeAinesta/5);
}



