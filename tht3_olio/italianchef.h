#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>
#include <iostream>
using namespace std;
class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);

private:
    int makepizza(int, int);
    int water,flour;
    string password = "pizza";
};

#endif // ITALIANCHEF_H
