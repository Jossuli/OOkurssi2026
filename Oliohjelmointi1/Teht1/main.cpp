#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{

int luku;
int luku2 = 1-maxnum;
int arvaukset = 0;
srand(time(0));
luku2=(rand() % maxnum)+1;
cout << "Arvaa luku" << endl;
cin >> luku;

arvaukset++;

    while (1){


        if(luku>luku2){
            arvaukset++;
            cout << "liian suuri, kokeile uudestaan" << endl;
            cin >>luku;
        }
        else if(luku<luku2){
            arvaukset++;
            cout << "liian pieni, kokeile uudestaan" << endl;
            cin >> luku;
        }
        else{
            cout << "Oikein" << endl;
            return arvaukset;
        }
    }
}

int main()
{
    int arvo = game(40);
        cout << "Arvauksia "<< arvo <<endl;
    return 0;
}

