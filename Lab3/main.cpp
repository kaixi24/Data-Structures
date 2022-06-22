#include <iostream>
#include <string>
#include "dayType.h"
#include "dayType.cpp"
using namespace std;

int main() {
    dayType t1;
    t1.setDay("Saturday");
    t1.printDay(); // print today
    cout<<endl;
    cout<<t1.returnDay()<<endl; //return today;
    cout<<t1.returnNextDay()<<endl; //return the next day
    cout<<t1.returnPreviousDay()<<endl; //return the previous day
    cout<<t1.cal_return_Day(3)<<endl; // calculate teh day with 3 days later
    return 0;
}
