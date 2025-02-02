#include "asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(string n, double luottoraja) : nimi(n), kayttotili(n), luottotili(n,luottoraja){
    cout <<"pankkitili luotu: " << n << endl;
    cout<<"luottotili luotu: "<<n<< " luottoraja: " << luottoraja << endl;
    cout<<"asiakkuus luotu: "<<n<<endl;

}
string Asiakas::getNimi()
    {
        return nimi;
    }


void Asiakas::showSaldo()
{
    cout << "pankkitilin saldo: " << kayttotili.getBalance()<<endl;
    cout << "luottotilin saldo: "<< luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double maara)
{
    return kayttotili.deposit(maara);
}

bool Asiakas::nosto(double maara)
{
    return kayttotili.withdraw(maara);
}

bool Asiakas::luotonMaksu(double maara)
{
    return luottotili.deposit(maara);
}

bool Asiakas::luotonnosto(double maara)
{
    return luottotili.withdraw(maara);
}

bool Asiakas::tiliSiirto(double maara, Asiakas &tili)
{

    if (maara > kayttotili.getBalance()){
        cout << "Virhe tilisiirrossa: varat liian pienet." << endl;
        return false;
    } else if (maara < 0){
        cout << "Virhe tilisiirrossa: negatiivinen summa." << endl;
        return false;
    } else {
        cout << "Summa "<< maara << " siirretaan tilille: " << tili.getNimi() << endl;
        kayttotili.withdraw(maara);

        cout << tili.getNimi() << " Pankkitili: ";
        tili.kayttotili.deposit(maara);

        return true;
    }
}
