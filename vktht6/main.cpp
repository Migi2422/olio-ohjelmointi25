#include <iostream>
#include "Student.h"
#include <string>
using namespace std;
#include<vector>
#include <algorithm>

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{
            int age;
            string name;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "anna opiskelijan nimi: " << endl;
            cin >> name;
            cout << "anna opiskelijan ika: " << endl;
            cin >> age;
            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(name,age);
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for(const auto& student : studentList){
                student.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            for(const auto& student : studentList){
                student.printStudentInfo();
            }


            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b)  {
                return a.getAge() < b.getAge();
            });
            for(const auto& student : studentList){
                student.printStudentInfo();
            }
            break;
        case 4:{
            string name;
            // Kysy käyttäjältä opiskelijan nimi
            cout << "anna opiskelijan nimi: " << endl;
            cin >> name;
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            auto it = find_if(studentList.begin(), studentList.end(), [&](const Student& student)
            {
                return student.getName() == name;
            });
            if(it != studentList.end()){
                it->printStudentInfo();
            } else {
                cout << "oppilasta ei loytynyt." << endl;
            }
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}
