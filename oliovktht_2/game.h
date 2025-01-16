#ifndef GAME_H
#define GAME_H
using namespace std;
#include <iostream>


class Game
{
public:

    Game(int); //konstruktori
    ~Game(); //destruktori
    void play();
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();

    };

#endif // GAME_H
