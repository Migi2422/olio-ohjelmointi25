#include "notifikaattori.h"
using namespace std;
#include <string>
#include <iostream>

Notifikaattori::Notifikaattori(){
    cout << "alustetaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *uusi)
{
    uusi->next = seuraajat;
    seuraajat=uusi;

    cout << "notifikaattori lisaa seuraajan: " << seuraajat->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *poistettu)
{
    if (seuraajat == nullptr){
        cout << "lista on tyhjä" << endl;
        return;
    }

    if (seuraajat == poistettu){
        seuraajat = seuraajat->next;
        cout << "notifikaattori poisti seuraajan: " << poistettu->getNimi() << endl;
        return;
    }

    Seuraaja *temp = seuraajat;
    while (temp->next != nullptr){
        if (temp->next == poistettu){
            temp->next = temp->next->next;
            cout << "notifikaattori poisti seuraaja: " << poistettu->getNimi() << endl;
            return;
        }
        temp = temp->next;
    }
}

void Notifikaattori::tulosta()
{
    cout << "notifikaattori seuraajat: " << endl;
    Seuraaja *tulostus = seuraajat;
    while(tulostus != nullptr){
        cout << "seuraajan nimi: " << tulostus->getNimi() << endl;
        tulostus = tulostus->next;
    }
}

void Notifikaattori::postita(string postita)
{
    if(seuraajat == nullptr){
        cout << "ei postitettavaa" << endl;
        return;
    }
    cout << "notifikaattori postittaa viestin: " << postita << endl;
    Seuraaja *postaa =seuraajat;
    while(postaa != nullptr){
        postaa->paivitys(postita);
        postaa=postaa->next;
    }
}
