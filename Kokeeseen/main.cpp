#include <string>
#include <iostream>
using namespace std;

class Father
{
public:
    Father(string);
    void printEducation();// Add Father definition
    int FathersInheritage;
    string education;
};

class Son :public Father
{
public:
    Son(string);
    void printEducation();
    string education;
    // Add Son definition
};


Father::Father(string s)
{
    education = s;
    FathersInheritage = 10000;
    cout<<"Father is born!"<<endl;
}

void Father::printEducation()
{
    cout<<"Father education = "<<education<<endl;
}


Son::Son(string s):Father(s)
{
    education = "Koodari";
    cout<<"Son is born!"<<endl;
    cout<<"Son gets "<<FathersInheritage<<" euros as an inheritage from Father"<<endl;
}

void Son::printEducation()
{
    cout<<"Son education = "<<education<<endl;
}
