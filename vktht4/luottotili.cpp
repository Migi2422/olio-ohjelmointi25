#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>
using namespace std;


Luottotili::Luottotili(string n, double lr):Pankkitili(n), luottoRaja(-lr) {

}

bool Luottotili::deposit(double maara)
{

    if(saldo + maara > 0){
        cout << "luottotalletus liian suuri" << endl;
    return false;
    }
    else if(maara <= 0){
        cout << "luoton tallennusvirhe: negatiivinen summa" << endl;
        return false;
    }
    else
            saldo += maara;
    cout << "talletus onnnistui "<< maara << " euroa, luottosaldo: " << saldo << endl;
    return true;
}

bool Luottotili::withdraw(double maara)
{
    if (maara <= 0){
        cout << "Luoton nostovirhe: nolla tai negatiivinen summa!" << endl;
        return false;

    } else if (maara - saldo < luottoRaja){
        cout << "Luoton nosto liian suuri! " << endl;
        return false;

    } else {
        saldo -= maara;
        cout << "Luoton nosto onnistui summalla " << maara << ". Luottosaldo: " << saldo << endl;
        return true;
    }

}
