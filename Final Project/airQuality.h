//
// Created by Kai Xi on 3/4/22.
//

#ifndef UNTITLED139_AIRQUALITY_H
#define UNTITLED139_AIRQUALITY_H

#include <iostream>

using namespace std;

class airQuality {
    friend ostream& operator << (ostream&, const airQuality&); // method overloading
    friend istream& operator >> (istream&, airQuality&);

public:

    // default constructor
    airQuality();

    //    Time time;
    //    Date date;
    //    int temp;
    //    int relativeHumidity;
    //    int absoluteHumidity;

    // specific constructor
    airQuality(int hour, int min, int sec, int day, int month, int year, double t, double rh, double ah);


    // setters
    void setTemperature(double t);
    void setRelativeHumidity(double rh);
    void setAbsoluteHumidity(double ah);
    void setAirQuality(int hour, int min, int sec, int day, int month, int year, double t, double rh, double ah);

    // getters
    double getTemperature() const;
    double getRelativeHumidity() const;
    double getAbsoluteHumidity() const;
    Date getDate() const;
    Time getTime() const;

    // printf
    void print() const;

    /*
    // Overloading operators
    bool operator<(const airQuality& otherQuality) const;
    bool operator>(const airQuality& otherQuality) const;
    bool operator==(const airQuality& otherQuality) const;
    bool operator<=(const airQuality& otherQuality) const;
    bool operator>=(const airQuality& otherQuality) const;
    bool operator!=(const airQuality& otherQuality) const;
*/
    // Overloading math operations
    /*
    airQuality operator++();
    airQuality operator++(int);
    airQuality operator--();
    airQuality operator--(int);
     */

private:
    // data members
    Time time;
    Date date;
    double temp;
    double relativeHumidity;
    double absoluteHumidity;
};

#endif //UNTITLED139_AIRQUALITY_H
