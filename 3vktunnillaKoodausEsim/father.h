#ifndef FATHER_H
#define FATHER_H
#include <string>

using namespace std;

class Father
{
public:
    Father(string);
    ~Father();
    void printFatherName();
    virtual void printEducation(); //virtual on kuvitteellinen, voidaan ylikirjoittaa
private:
    string FatherName;
protected: //poika pystyy kirjoittamaan lempinimen
    string FatherNickName;
};

#endif // FATHER_H
