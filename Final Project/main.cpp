#include <iostream>
#include "Time.h"
#include "Time.cpp"
#include "Date.h"
#include "Date.cpp"
#include "airQuality.h"
#include "airQuality.cpp"
#include <fstream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

//helper function: Split function,
//to split the string by the separator and store in a vector
vector<string> split(const string &s, const string & seperator){
    vector<string> result;
    typedef string::size_type string_size;
    string_size i = 0;
    while(i != s.size()){
        //找到字符串中首个不等于分隔符的字母；
        int flag = 0;
        while(i != s.size() && flag == 0){
            flag = 1;
            for(string_size x = 0; x < seperator.size(); ++x)
                if (s[i] == seperator[x]) {
                    ++i;
                    flag = 0;
                    break;
                }
        }

        //找到又一个分隔符，将两个分隔符之间的字符串取出；
        flag = 0;
        string_size j = i;
        while(j != s.size() && flag == 0){
            for(string_size x = 0; x < seperator.size(); ++x)
                if (s[j] == seperator[x]) {
                    flag = 1;
                    break;
                }
                if (flag == 0) ++j;
        }
        if(i != j){
            result.push_back(s.substr(i, j-i));
            i = j;
        }
    }
    return result;
}

// interact with the user to input the month value
// calculate the avg temp for that month
void calculateTemp(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display the average temperature for that month"<<endl;
    cin>>month;
    cin>>year;
    int count=0; double sum=0.0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getRelativeHumidity()==-200) continue;
        else if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            sum+=res[i].getTemperature();
            count++;
        }
    }
    if (count>0) cout<<"The avg temp for this month is "<< sum*1.0/count<<endl;
    else cout<<"No such month and year available"<<endl;
}

// interact with the user to input the month value
// calculate the avg relative humidity for that month
void calculateAvgRH(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display the average relative humidity for that month"<<endl;
    cin>>month>>year;
    int count=0; double sum=0.0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getRelativeHumidity()==-200) continue;
        else if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            sum+=res[i].getRelativeHumidity();
            count++;
        }
    }
    if (count>0) cout<<"The avg relative humidity for this month is "<< sum*1.0/count<<endl;
    else cout<<"No such month is available."<<endl;
}

// interact with the user to input the month value
// calculate the avg absolute humidity for that month
void calculateAvgAH(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display the average relative humidity for that month"<<endl;
    cin>>month>>year;
    int count=0; double sum=0.0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getRelativeHumidity()==-200) continue;
        else if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            sum+=res[i].getAbsoluteHumidity();
            count++;
        }
    }
    if (count>0) cout<<"The avg absolute humidity for this month is "<< sum*1.0/count<<endl;
    else cout<<"No such month and year available"<<endl;
}

// interact with the user to input the date and time
// display the temperature and relative humdity for that time and date
void displayTempRH(vector<airQuality> &res){
    int date, month, year;
    int hour, min, sec;
    cout<<"Please enter a date in the order of date, month, year, separated by a space e.g 10 3 2010"<<endl;
    cout<<"Please enter a time in the order of Hour, Min, Sec, separated by a space eg 18 0 0"<<endl;
    cout<<"The date should be in between 10 March 2004 18:00:00 to 4 April 2005 14:00:00"<<endl;
    cout<<"the Min and Sec should be 0 and hour should be 24 hour format"<<endl;
    cout<<"The program then will display the temperature and relative humidity at that time ";
    cin>>date>>month>>year;
    cin>>hour>>min>>sec;
    int count=0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getDate().getMonth()==month &&res[i].getDate().getYear()==year && res[i].getDate().getDay()==date &&
           res[i].getTime().getHour()==hour && res[i].getTime().getSec()==sec && res[i].getTime().getMin()==min){
            cout<<"The temp for this date and time is " <<res[i].getTemperature()<<endl;
            cout<<"The relative humidity for this date and time is "<<res[i].getRelativeHumidity()<<endl;
            count++;
        }
    }
    if (count==0) cout<<"No such time and date available"<<endl;
}

// interact with the user to input the month value
// display the highest temperature for this month

void displayHighestTemp(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display the highest temperature for that month"<<endl;
    cin>>month>>year;
    double maxValue=INT_MIN;
    for (int i=0; i<res.size(); i++){
        if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            maxValue=max(res[i].getTemperature(),maxValue);
        }
    }
    if (maxValue>INT_MIN) cout<<"The highest temperature for this month is "<< maxValue<<endl;
    else cout<<"Invalid input"<<endl;
}

// interact with the user to input the month value
// display the highest relative humidity for this month

void displayHighestRH(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display the highest relative humidity for that month"<<endl;
    cin>>month>>year;
    double maxValue=INT_MIN;
    for (int i=0; i<res.size(); i++){
        if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            maxValue=max(res[i].getRelativeHumidity(),maxValue);
        }
    }
    if(maxValue>INT_MIN) cout<<"The highest relative humidity for this month is "<< maxValue<<endl;
    else cout<<"Wrong input"<<endl;
}

// interact with the user to input the month value
// display the highest absolute humidity for this month

void displayHighestAH(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display the highest absolute humidity for that month"<<endl;
    cin>>month>>year;
    double maxValue=INT_MIN;
    for (int i=0; i<res.size(); i++){
        if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            maxValue=max(res[i].getAbsoluteHumidity(),maxValue);
        }
    }
    if(maxValue>INT_MIN) cout<<"The highest absolute humidity for this month is "<< maxValue<<endl;
    else cout<<"Wrong input"<<endl;
}

// interact with the user to input the month value
// display the day, time and temperature for the time when the temp is higher than the average value

void displayDateTimeForTemp(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display day time and temp that is higher than avg for this month"<<endl;
    cin>>month>>year;
    //get the average temp for that month
    int count=0; double sum=0.0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getRelativeHumidity()==-200) continue;
        else if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            sum+=res[i].getTemperature();
            count++;
        }
    }
    double avg=sum*1.0/count;
    if (count==0) cout<<"wrong input"<<endl;

    //display the date, time and temp for temp that is higher than avg
    for (int i = 0; i < res.size(); i++) {
        if (res[i].getTemperature() > avg) {
            cout << "Date:" << res[i].getDate()<<" ";
            cout << "Time:" << res[i].getTime()<<" ";
            cout << "Temp:" << res[i].getTemperature()<<" ";
            cout << endl;
        }
    }
}

// interact with the user to input the month value
// display the day, time and relative humidity for the time when the rh is higher than the average value

void displayDateTimeForRH(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display day time and temp that is higher than avg for this month"<<endl;
    cin>>month>>year;
    //get the average temp for that month
    int count=0; double sum=0.0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getRelativeHumidity()==-200) continue;
        else if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            sum+=res[i].getTemperature();
            count++;
        }
    }
    double avg=sum*1.0/count;
    if (count==0) cout<<"Wrong input"<<endl;

    //display the date, time and rh for temp that is higher than avg
    for (int i = 0; i < res.size(); i++) {
        if (res[i].getTemperature() > avg) {
            cout << "Date:" << res[i].getDate() << " ";
            cout << "Time:" << res[i].getTime() << " ";
            cout << "Relative Humidity:" << res[i].getTemperature() << " ";
            cout << endl;
        }

    }
}

// interact with the user to input the month value
// display the day, time and absolute humidity for the time when the ah is higher than the average value
void displayDateTimeForAH(vector<airQuality> &res){
    int month; int year;
    cout<<"Please enter a month value (1-12) and a year value separated by a space eg 11 2004"<<endl;
    cout<<"Time period is March 2004 to April 2005 (Both months are included)"<<endl;
    cout<< "The program will display day time and temp that is higher than avg for this month"<<endl;
    cin>>month>>year;
    //get the average temp for that month
    int count=0; double sum=0.0;
    for (int i=0; i<res.size(); i++){
        if (res[i].getRelativeHumidity()==-200) continue;
        else if (res[i].getDate().getMonth()==month && res[i].getDate().getYear()==year){
            sum+=res[i].getTemperature();
            count++;
        }
    }
    double avg=sum*1.0/count;
    if(count==0) cout<<"wrong input"<<endl;

    //display the date, time and temp for temp that is higher than avg
    for (int i = 0; i < res.size(); i++) {
        if (res[i].getTemperature() > avg) {
            cout << "Date: " << res[i].getDate()<<" ";
            cout << "Time: " << res[i].getTime()<< " ";
            cout << "Absolute Humidity:" << res[i].getTemperature()<<" ";
            cout<< endl;
        }
    }
}

// main function

int main() {
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    // open the file
    inFile.open("AirQualityUCI.txt");
    if (!inFile) // output error when cannot open the file
    {
        cout << "Cannot open the input file. "
             << "The program terminates." << endl;
        return 1;
    }

    string s;
    // to skip the first line;
    getline(inFile,s);
    //use the vector to store the information
    vector<vector<string>> vec;
    while (true) {
        getline(inFile, s); //get the information for each line
        vector<string> v = split(s, ","); //separate the line with ","
        if (v[0].size()<5) // to skip invalid data values
            break;
        vec.push_back(v);
   }

    //store the airQuality object in another vector
    vector<airQuality> res;

    //read the whole dataset
    for(int i=0; i<vec.size(); i++){
        vector<string> s=split(vec[i][0],"/"); //separate the string value with "/"
        vector<string> t=split(vec[i][1],":"); //separate the string value with ":"
        //initialize the airQuality object
        airQuality aq(stoi(t[0]),stoi(t[1]),stoi(t[2]),stoi(s[0]),stoi(s[1]),stoi(s[2])+2000,stod(vec[i][12]),stod(vec[i][13]),stod(vec[i][14]));
        res.push_back(aq);
    }
    int number;
    //menu option
    while (true){
        cout << "Below is the menu we have, choose what you want to know and display:"<<endl;
        cout<<"1. display the average temperature for a month"<<endl;
        cout<<"2. display the relative humidity for a month"<<endl;
        cout<<"3. display the absolute humidity temperature for a month"<<endl;
        cout<<"4. display the temperature and relative humidity for a time and date"<<endl;
        cout<<"5. display the highest temperature for an input month"<<endl;
        cout<<"6. display the highest relative humidity for an input month"<<endl;
        cout<<"7. display the highest absolute humidity for an input month"<<endl;
        cout<<"8. display the dates and times for a month when the temp is higher than average"<<endl;
        cout<<"9. display the dates and times for a month when the relative humidity is higher than average"<<endl;
        cout<<"10. display the dates and times for a month when the absolute humidity is higher than average"<<endl;
        cout<<" choose a number to make an choice (1-10): eg. 3"<<endl;
        cout<<"If you want to exit the program, please enter -1"<<endl;
        cin>>number;
        if (number==-1) break;
        // call the respective functions to help calculate the values:
        switch(number){
            case (1): calculateTemp(res); break;
            case (2): calculateAvgRH(res); break;
            case (3): calculateAvgAH(res); break;
            case (4): displayTempRH(res); break;
            case (5): displayHighestTemp(res); break;
            case (6): displayHighestRH(res); break;
            case (7): displayHighestAH(res); break;
            case (8): displayDateTimeForTemp(res); break;
            case (9): displayDateTimeForRH(res); break;
            case (10): displayDateTimeForAH(res); break;
            default: cout<<"Wrong input, please enter again"<<endl; break;
        }
    }

    // close the file
    inFile.close();

    return 0;
}

