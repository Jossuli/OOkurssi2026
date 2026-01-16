#include <iostream>
#include <ctime>
#include "game.h"

using namespace std;

int main()
{
    Game Game(10);
    Game.play();
    Game.printGameResult();
    return 0;
}
