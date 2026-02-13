#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<Student> Luokka;
    Luokka.reserve(10);
    Luokka.emplace_back(Student("Saku Sammakko",1));
    Luokka.emplace_back("Jeppe Niilonpoika",2); //tietää studenteista
    Luokka.emplace_back("Aku Ankka",3); //tietää studenteista

    vector<Student>::iterator iteraattori= Luokka.begin();

    for(auto & s:Luokka)
    {
        cout << "Student = " << s.getName() << endl;
    }
    sort(Luokka.begin(), Luokka.end(),[](Student & a, Student & b){return a.getNumber()>b.getNumber();}); //sort järjestelee []=Kertoo että lambda funktio alkaa
    for(auto & s:Luokka)
    {
        cout << "Student = " << s.getName() << endl;
    }
    cout << "luokan ensimmainen opiskelija = " <<iteraattori++->getName()<<endl;
    cout << "luokan toinen opiskelija = " << iteraattori++->getName()<<endl;
    cout << "luokan kolmas opiskelija = " << iteraattori->getName()<<endl;

    return 0;
}
