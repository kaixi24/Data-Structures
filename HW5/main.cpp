#include <iostream>
#include "Address.h"
#include "Address.cpp"
#include "Person.h"
#include "Person.cpp"
#include <map>
using namespace std;

int main() {
    map<Person, Address> myMap;

    // Creating instances of personType
    Person p1("Htet", "Htet", "Win");
    Person p2("Ang", "Wan", "Xin");
    Person p3("A", "B", "C");
    Person p4("D", "E", "F");

    // Creating instances of date
    Address a1 (10,5,10,"Wall Street","Seattle","United States",4320);
    Address a2 (120,5,10,"Wall Street","Singapore","Singapore",43120);
    Address a3 (100,15,10,"Wall Street","Shanghai","China",4120);
    Address a4 (20,89,300,"Ave","Tokyo","Japan",11100);

    // Inserting values into map called myMap
    myMap.insert(pair<Person,Address>(p1, a1));
    myMap.insert(pair<Person, Address>(p2, a2));
    myMap.insert(pair<Person, Address>(p3, a3));
    myMap.insert(pair<Person, Address>(p4, a4));

    // Defining an iterator called "it"
    map<Person, Address>::iterator it;

    // Displaying the map
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first<< ": "
             << it->second << '\n';
    }
    return 0;

}
