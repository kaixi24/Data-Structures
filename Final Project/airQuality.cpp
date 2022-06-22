//
// Created by Kai Xi on 3/4/22.
//

#include "airQuality.h"

//default constructor
airQuality::airQuality() {
    Time time(1,2,3);
    Date date(1,5,2010);
    temp=70.0;
    relativeHumidity=30.0;
    absoluteHumidity=23.0;
}

//specific constructor
airQuality::airQuality(int hour, int min, int sec, int day, int month, int year, double t, double rh, double ah):
date(day,month,year), time(hour,min,sec){
 temp=t;
 relativeHumidity=rh;
 absoluteHumidity=ah;
}

//setters to set the airquality object
void airQuality::setAirQuality(int hour, int min, int sec, int day, int month, int year, double t, double rh, double ah){
time.setTime(hour,min,sec);
date.setDmy(day,month,year);
temp=t;
relativeHumidity=rh;
absoluteHumidity=ah;
}

//set the absolute humidity
void airQuality::setAbsoluteHumidity(double ah) {
    absoluteHumidity=ah;
}

//set the relative humidity
void airQuality::setRelativeHumidity(double rh) {
    relativeHumidity=rh;
}

// set the temperature
void airQuality::setTemperature(double t) {
    temp=t;
}

// getters to get the absolute humidity
double airQuality::getAbsoluteHumidity() const {
    return absoluteHumidity;
}

//getters to get the relative humidity
double airQuality::getRelativeHumidity() const {
    return relativeHumidity;
}

//getters to get the temperature
double airQuality::getTemperature() const{
    return temp;
}
//getters to get the Date object
Date airQuality::getDate() const {
    return date;
}
//getters to get the Time object
Time airQuality::getTime() const {
    return time;
}

// printf to print the airQuality object
void airQuality::print() const
{
    time.print();
    cout<<endl;
    date.print();
    cout<<endl;
    cout <<"Temperature is "<< temp << ", "
         <<"Relative humidity is " <<relativeHumidity <<", "
         << "Absolute humidity is "<<absoluteHumidity<<endl;
}

// ostream operator
ostream& operator << (ostream& osObject, const airQuality& quality1) //creating an instance of a date class, i.e. date1
{
    osObject << quality1.time<<"/"<<quality1.date<<"/"<<quality1.temp
             << "/" << quality1.relativeHumidity
             << "/" << quality1.absoluteHumidity;
    return osObject;
}

// istream operator
istream& operator >> (istream& isObject, airQuality & quality1)
{
    isObject >> quality1.time>>quality1.date>>quality1.temp>> quality1.relativeHumidity>> quality1.absoluteHumidity;
    return isObject;
}
