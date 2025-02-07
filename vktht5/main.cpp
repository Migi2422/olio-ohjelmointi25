#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
#include <string>
using namespace std;


int main()
{
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    n.postita("tama on viesti 1");

    n.poista(&b);

    n.postita("tama on viesti 2");

    return 0;
}
