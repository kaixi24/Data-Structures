#include <iostream>
#include <algorithm>
using namespace std;

void userinput(double &speed, double &temp){
    cout<<"Please input the wind speed in miles per hour:"<<endl;
    cin>>speed;
    cout<<"Please input the temperature in degrees Fahrenheit."<<endl;
    cin>>temp;
}
 double calculateWindchill(double speed, double temp){
    double windSpeedFactor;
    windSpeedFactor=35.74+0.6215*temp-35.75* pow(speed,0.16)+0.4275*temp*pow(speed,0.16);
    return windSpeedFactor;
}

int main() {
    double speed=0.0;
    double temp=0.0;
    double windSpeedFactor;
    userinput(speed, temp);
    windSpeedFactor=calculateWindchill(speed,temp);
    cout<<"The windchill factor is "<<windSpeedFactor;
    return 0;
}
