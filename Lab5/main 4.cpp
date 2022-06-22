#include <iostream>
#include <map>
#include "Person.h"
#include "Person.cpp"
#include "Date.h"
#include "Date.cpp"
#include <string>
using namespace std;

int main() {
    // Declaring a map object
    map<Person, Date> myMap;

    // Creating instances of personType
    Person p1("Htet", "Htet", "Win");
    Person p2("Ang", "Wan", "Xin");
    Person p3("A", "B", "C");
    Person p4("D", "E", "F");

    // Creating instances of date
    Date d1(1, 2, 1995);
    Date d2(2, 12, 1998);
    Date d3(3, 10, 1999);
    Date d4(4, 1, 2000);

    // Inserting values into map called myMap
    myMap.insert(pair<Person,Date>(p1, d1));
    myMap.insert(pair<Person, Date>(p2, d2));
    myMap.insert(pair<Person, Date>(p3, d3));
    myMap.insert(pair<Person, Date>(p4, d4));

    // Defining an iterator called "it"
    map<Person, Date>::iterator it;

    // Displaying the map
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first<< ": "
             << it->second << '\n';
    }
    return 0;
}
