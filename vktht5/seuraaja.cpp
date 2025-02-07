#include "seuraaja.h"
using namespace std;
#include <iostream>
#include <string>



Seuraaja::Seuraaja(string n) : nimi(n) {
    cout << "uusi seuraaja: " << n << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string n)
{
    cout << "paivitys: " << getNimi() << " on saanut ilmoituksen: " << n << endl;
}
