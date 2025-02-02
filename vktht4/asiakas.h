#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"
using namespace std;

class Asiakas
{
public:
    Asiakas(string n, double luottoraja);
    string getNimi();
    void showSaldo();
    bool talletus(double maara);
    bool nosto(double maara);
    bool luotonMaksu(double maara);
    bool luotonnosto(double maara);
    bool tiliSiirto(double maara, Asiakas &vastaanottaja);


private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

};

#endif // ASIAKAS_H
