#include "game.h"

Game::Game(int maxNumber) : maxNumber(maxNumber), playerGuess(0), numOfGuesses(0){

    srand(static_cast<unsigned>(time(0)));
    randomNumber = rand() % maxNumber +1;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value " << endl;
}

Game::~Game()
{
    cout << "object destructed" << endl;
}

void Game::play()
{

    do{
        cin >> playerGuess;
        numOfGuesses++;


        if(playerGuess > randomNumber){
            cout << "Luku on pienempi" << endl;
        }

        else if(playerGuess < randomNumber){
            cout << "luku on isompi" << endl;
        }

        else{
            cout << "Good job!" << endl;
        }

        }while(playerGuess != randomNumber);
    printGameResult();
}


    void Game::printGameResult()
{
    cout << "Correct answer is: " << randomNumber << endl;
    cout << "total guesses: " << numOfGuesses << endl;
}
