#include <iostream>
using namespace std;
int arvauspeli(int maxnum);

int main(){
    int ylaraja;
    cout << "*****Arvauspeli*****" << endl;
    cout << "laita jokin luku ylarajaksi" << endl;
    cin >> ylaraja;
    cout << "arvaappa luku 1 - " << ylaraja << endl;
    arvauspeli(ylaraja);


return 0;
}


int arvauspeli(int maxnum){

    int num;
    int guess;
    int tries;
    srand(time(NULL));

    num = rand() % maxnum + 1;



    do{
        cin >> guess;
        tries++;


        if(guess > num){
            cout << "Luku on pienempi" << endl;
        }

        else if(guess < num){
            cout << "luku on isompi" << endl;
        }

        else{
            cout << "Oikea vastaus # arvausten maara " << tries << endl;
        }

    }while(guess != num);
    return tries;
}
