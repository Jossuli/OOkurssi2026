#include <iostream>
#include "father.h"
#include "sun.h"

using namespace std;

int main()
{
    Sun poika("Matti","Pekka");
    poika.printFatherName();
    poika.printEducation();
    poika.Father::printEducation();
    return 0;
}

