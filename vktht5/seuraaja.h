#ifndef SEURAAJA_H
#define SEURAAJA_H
using namespace std;
#include <string>

class Seuraaja
{
public:
    Seuraaja(string);
    string getNimi();
    void paivitys(string);
    Seuraaja *next = nullptr;

private:
    string nimi;
};

#endif // SEURAAJA_H
