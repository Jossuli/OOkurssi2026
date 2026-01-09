#include <iostream>

using namespace std;

int main()
{
    int luku;
    srand(luku);
    cout << "Arvaa luku" << endl;
    cin >> luku;

    for (int i=20; i != 20; i++){
        cout << "" <<rand()%20 << endl;
    }
    if(luku>20){
        cout << "liian suuri" << endl;
    }
    if(luku<1){
        cout << "liian pieni" << endl;
    }
    else{
        cout << "Oikein" << endl;
    }
    return 0;
}
