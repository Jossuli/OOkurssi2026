#ifndef SUN_H
#define SUN_H
#include <string>
#include "father.h"

using namespace std;

class Sun:public Father //peritään father luokasta public ja protected
{
public:
    Sun(string,string);
    ~Sun();
    void printEducation() override; //override ylikirjoitetaan

private:
    string sonName;
};

#endif // SUN_H
