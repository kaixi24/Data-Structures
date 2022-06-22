//
// Created by Kai Xi on 3/4/22.
//

#include "Time.h"
#include <iostream>
using namespace std;

// default constructor
Time::Time()
{
    hour=10;
    min=00;
    sec=20;
}

// specific constructor
Time::Time(int h, int m, int s)
{
    hour = h;
    min = m;
    sec = s;
}

// setters to set the hour
void Time::setHour(int h)
{
    hour=h;
}

// setters to set the min

void Time::setMin(int m)
{
    min = m;
}

// setters to set the sec
void Time::setSec(int s)
{
    sec=s;
}
//setter to set the time
void Time::setTime(int h, int m, int s)
{
    hour=h;
    min=m;
    sec=s;
}

// getters to get the hour
int Time::getHour() const {
    return hour;
}

//getters to get the min
int Time::getMin() const{
    return min;
}

//getters to get the sec
int Time::getSec() const
{
    return sec;
}

// printf to print the time
void Time::print() const
{
    cout << hour << ":"
         << min << ":"
         << sec;
}

// ostream operator
ostream& operator << (ostream& osObject, const Time& time1) //creating an instance of a time class, i.e. time1
{
    osObject << time1.hour
             << ":" << time1.min
             << ":" << time1.sec;
    return osObject;
}

// istream operator
istream& operator >> (istream& isObject, Time& time1)
{
    isObject >> time1.hour >> time1.min >> time1.sec;
    return isObject;
}
/*
// Overloading "equal to" operator
bool Time::operator==(const Time& otherTime) const
{
    if (hour == otherTime.hour && min == otherTime.min
        && sec == otherTime.sec)
        return true;
    else
        return false;
}

// Overloading "not equal to" operator
bool Time::operator!=(const Time& otherTime) const
{
    return !(*this == otherTime);
}

// Overloading "less than or equal to" operator
bool Time::operator<=(const Time& otherTime) const
{
    return (*this < otherTime || *this == otherTime);
}

// Overloading "less than" operator
bool Time::operator<(const Time& otherTime) const
{
    if ((hour < otherTime.hour) ||
        (hour == otherTime.hour && min < otherTime.min) ||
        (hour == otherTime.hour && min == otherTime.min && sec < otherTime.sec))
        return true;
    else
        return false;
}

// Overloading "greater than or equal to" operator
bool Time::operator>=(const Time& otherTime) const
{
    return !(*this < otherTime);
}

// Overloading "greater than" operator
bool Time::operator>(const Time& otherTime) const
{
    return !(*this <= otherTime);
}
 */

