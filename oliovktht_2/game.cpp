#include "game.h"

Game::Game(int maxNumber) : maxNumber(maxNumber){
    srand(time(NULL));
    randomNumber = rand() % maxNumber +1;

}

Game::~Game()
{
    cout << "object destructed" << endl;
}

void Game::play()
{
    //cout << "enter your limit number" << endl;
    //cin >> maxNumber;
    //cout << "guess the number between 1-" << maxNumber << endl;




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
            cout << "Oikea vastaus" << endl;
        }

        }while(playerGuess != randomNumber);
    printGameResult();
}


    void Game::printGameResult()
{
    cout << "Correct answer is: " << randomNumber << endl;
    cout << "total guesses: " << numOfGuesses << endl;
}
