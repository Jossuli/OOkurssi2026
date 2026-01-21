#include "sun.h"
#include <iostream>

Sun::Sun(string isa, string poika) : Father(isa) //lopussa : tarkoittaa alustamista
{
    //isä pitää olla hengissä jo nyt!!
    sonName=poika;
    cout << "Son = " << sonName
         << " crated" << endl;
    FatherNickName = "Isukki";
}
Sun::~Sun()
{
    cout << "Son = " << sonName
     << " deleted" << endl;
}
void Sun::printEducation()
{
    cout << "Son education = koodari" << endl;
}
