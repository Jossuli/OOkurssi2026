#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

using namespace std;

class ItalianChef:public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string,int,int);
private:
    int makepizza(int,int);
    string password="pizza";
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
