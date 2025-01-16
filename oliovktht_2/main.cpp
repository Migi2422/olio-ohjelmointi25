#include <iostream>
#include <game.h>

using namespace std;

int main()
{
    int maxnum;
    cout << "enter limit number " << endl;
    cin >> maxnum;
    cout << "guess the number between 1-" << maxnum << endl;
    Game olio(maxnum);
    olio.play();
    return 0;


}
