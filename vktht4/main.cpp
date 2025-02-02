#include <iostream>
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas asiakas1("esa", 2000);
    asiakas1.showSaldo();
    cout << "pankkitilitalletus: " << asiakas1.talletus(1000);
    cout << "pankkitilinosto: " << asiakas1.nosto(200);
    cout << "luottotilinosto: " << asiakas1.luotonnosto(1000);
    cout << "luottotilitallennus: "<< asiakas1.luotonMaksu(100);
    asiakas1.showSaldo();


    Asiakas asiakas2("masa", 2000);

    asiakas2.showSaldo();


    cout << "tilin nimi: " << asiakas2.getNimi() << endl;
    cout << "tilisiirto henkilolta: " << asiakas1.getNimi() << " henkilolle " << asiakas2.getNimi() << endl;
    asiakas1.tiliSiirto(200, asiakas2);

    cout << "tilin nimi: " << asiakas2.getNimi() << endl;
    asiakas2.showSaldo();


    return 0;

}
