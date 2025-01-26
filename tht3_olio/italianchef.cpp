#include "italianchef.h"
#include <string>
using namespace std;


ItalianChef::ItalianChef(string m) : Chef(m){

    cout<< "italianchef constructor"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout << "italianchef destructor"<< endl;
}

bool ItalianChef::askSecret(string p, int w, int f)
{
    p;
    w;
    f;
    if(!password.compare(p)s){
        cout<<"correct password"<<endl;
        makepizza(w,f);
        return true;
    }
    else
        cout<<"try again please"<<endl;
    return false;
}

int ItalianChef::makepizza(int w, int f)
{
    int pizza = min(w,f)/5;
    cout<<"magic pizza"<<endl;
    return pizza;
}
