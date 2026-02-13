#include "student.h"
#include <iostream>


Student::Student(string n, int a)
{
    Name=n;
    Age=a;
}
void Student::SetAge(int b)
{
    Age = b;
}

void Student::SetName(string c)
{
    Name = c;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Opiskelijan nimi: " << Name << ", Ika: " << Age << endl;
}

