#include "pankkitili.h"
using namespace std;

Pankkitili::Pankkitili(string name):omistaja(name) {
    omistaja = name;


}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double talletus)
{
    if(talletus < 0){
        cout << "talletusvirhe: summa liian pieni tai negatiivinen" << endl;
        return false;
    }
    else{
        saldo = saldo + talletus;
        cout << "talletus onnistui summalla: " << talletus << " euroa " << "pankkitilin saldo: " << saldo << endl;
        return true;
    }
}

bool Pankkitili::withdraw(double nosto)
{
    if(nosto > saldo){
        cout << "nostovirhe: Saldo ei riita" << saldo <<endl;
        return false;
    }
    else if(nosto < 0){
        cout << "nostovirhe: summa on negatiivinen" << endl;
        return false;
    }


    else {
        saldo = saldo - nosto;
        cout << "nosto onnistui summalla: "<< nosto << " pankkitilin saldo: " << saldo << endl;
        return true;
        }

}
