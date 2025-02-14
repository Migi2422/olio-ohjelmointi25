#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string n, int a) : Name(n), Age(a)
{

}

void Student::setAge(int a)
{
    Age = a;
}

void Student::setName(string n)
{
    Name = n;
}

string Student::getName() const
{
    return Name;
}

int Student::getAge() const
{
    return Age;
}

void Student::printStudentInfo() const
{
    cout << "oppilaan nimi: " << Name << endl;
    cout << "oppilaan ika: " << Age << endl;
}
