#include "chef.h"
using namespace std;
#include <iostream>
Chef::Chef(string name) : chefName(name){

    cout<<"chef constructor"<<endl;
}

Chef::~Chef()
{
    cout<<"chef destructor"<< endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int salad)
{
    int portions = salad/5;
    cout<< "chef can make salad with " << portions<< " portions"<<endl;
    return portions;

}

int Chef::makeSoup(int soup )
{
    int portions = soup/3;
    cout<<"chef can make "<< portions << " portions" <<endl;
    return portions;
}
