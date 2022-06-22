//
// Created by Kai Xi on 3/4/22.
//

#ifndef UNTITLED139_TIME_H
#define UNTITLED139_TIME_H


#include <iostream>
using namespace std;

class Time
{
    friend ostream& operator << (ostream&, const Time&); // method overloading
    friend istream& operator >> (istream&, Time&);

public:

    // default constructor
    Time();

    // specific constructor
    Time(int h, int m, int s);

    // setters
    void setHour(int h);
    void setMin(int m);
    void setSec(int s);
    void setTime(int h, int m, int s);

    // getters
    int getHour() const;
    int getMin() const;
    int getSec() const;

    // printf
    void print() const;
/*
    // Overloading operators
    bool operator<(const Time& otherTime) const;
    bool operator>(const Time& otherTime) const;
    bool operator==(const Time& otherTime) const;
    bool operator<=(const Time& otherTime) const;
    bool operator>=(const Time& otherTime) const;
    bool operator!=(const Time& otherTime) const;

    // Overloading math operations
    Time operator++();
    Time operator++(int);
    Time operator--();
    Time operator--(int);
*/
private:
    // data members
    int hour;
    int min;
    int sec;
};


#endif //UNTITLED139_TIME_H
