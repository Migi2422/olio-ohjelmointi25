#include <iostream>
#include <game.h>

using namespace std;

int main()
{

    int maxNumber;
    cout << "Enter the maximum number for the game: " << endl;
    cin >> maxNumber;
    cout << "guess the number between 1 -" << maxNumber << endl;

    Game olio(maxNumber);
    olio.play();
    return 0;


}
