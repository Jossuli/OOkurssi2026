#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

    vector<Student>::iterator iteraattori= studentList.begin();

        switch(selection)
        {
        case 0:
        {
            string name;
            int Age;
            cout << "Opiskelijan nimi ? " << endl;
            cin >> name;
            cout << "Opiskelijan ika ? " << endl;
            cin >> Age;

            studentList.push_back(Student(name, Age));

            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        }
        case 1:
        {
            for(auto & n:studentList)
            {
                n.printStudentInfo();
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            break;
        }
        case 2:
        {
            sort(studentList.begin(), studentList.end(),[](Student a, Student b)
                 {return a.getName() < b.getName();});
            for(auto & k:studentList)
            {
                k.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }
        case 3:
        {
            sort(studentList.begin(), studentList.end(),[](Student a, Student b)
                 {return a.getAge() < b.getAge();});
            for(auto & p:studentList)
            {
                p.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        }
        case 4:
        {
            string etsiNimi;
            cout << "Kerro opiskelija nimi " << etsiNimi << endl;
            cin >> etsiNimi;
            auto iteraattori = find_if(studentList.begin(), studentList.end(),[etsiNimi](Student & d) {return d.getName() ==etsiNimi;});
            if(iteraattori == studentList.end())
            {
                cout << "Opiskelijaa " << etsiNimi << " ei ole saatavilla" << endl;
            }
            else
            {
                cout << "Opiskelijan " << etsiNimi << " tiedot on saatavilla" << endl;
            }
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        } // switch end

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }


}
    while(selection < 5);


return 0;
}
