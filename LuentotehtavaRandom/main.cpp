#include <iostream>
#include "random.h"
#include <ctime>
#include "dht.h"
#include "mittari.h"

using namespace std;

int main()
{
    Mittari mittari;

    mittari.setup();

    for (int i =0;i<10;i++)
    {
        mittari.mittaus();
    }
    return 0;
}
