#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;

Game::Game(int max)
{
    maxNumber = max;
}
Game::~Game() //~poistaa muistista tulokset
{
    cout << "Poistetaan muistista tulokset." << endl;
}
int Game::play()
{
    int randomNumber = 1-maxNumber;
    numOfGuesses=0;
    srand(time(0));
    randomNumber=(rand()%maxNumber+1);
    cout << "Aloitetaan peli, arvaa luku 1-10 "<< endl;
    cin>>playerGuess;

    while(1)
    {
        if(playerGuess>randomNumber)
        {
            numOfGuesses++;
            cout << "liian suuri, kokeile uudestaan " << endl;
            cin >> playerGuess;
        }
        else if (playerGuess<randomNumber){
            numOfGuesses++;
            cout << "liian pieni, kokeile uuudestaan" << endl;
            cin >> playerGuess;
        }
        else{
            numOfGuesses++;
            cout << "Oikein" << endl;
            return numOfGuesses; //palauttaa arvaukset
        }
    }
}

void Game::printGameResult()
{
    cout << "Arvauksia sinulle kertyi "<< numOfGuesses << endl;
    cout << "Peli on loppunut." << endl;
}

