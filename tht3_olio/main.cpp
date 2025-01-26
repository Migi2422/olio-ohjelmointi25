#include <iostream>
#include <chef.h>
#include <italianchef.h>
#include <string>
using namespace std;

int main()
{


    Chef chef1("Eero");
    cout<<"chef name is "<< chef1.getName()<<endl;
    ItalianChef chef2("tsouni");
    cout<<"chef name is "<< chef2.getName()<<endl;

    chef1.makeSalad(15);
    chef1.makeSoup(6);

    string password;
    int w;
    int f;
    chef2.askSecret("pizza",w,f);

    return 0;
}
