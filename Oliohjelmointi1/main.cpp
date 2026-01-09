#include <iostream> //kirjastokomponentti, voidaan käyttää cout oliota

using namespace std; //tandardikirjasto on kikki kirjoitettu paikkaan std

int main()
{
    int koe=5;
    printf("Hello Word c:n tavalla = %d\n",koe); //sama asia kuin cout
    cout << "Hello World!" << koe << endl;
    return 0;
}
