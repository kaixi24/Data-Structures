#include <iostream>
using namespace std;
#include <iomanip>

const int low_income=25000;
const int free_time_low_income=30;
const int free_time=20;
const double rate_low=0.4;
const double rate=0.7;
const int hour_to_min=60;

bool isLowIncome (double i){
    if (i>low_income) return false;
    else return true;
}

double billingAmount(double hR, double T, bool s){
    double amount;
    if (s) {
        if (T <= free_time_low_income)
            amount = 0.0;
        else
            amount = rate_low * (T - free_time_low_income) / hour_to_min * hR;
    }
    else {
        if (T<=free_time)
            amount=0;
        else
            amount = rate * (T - free_time) / hour_to_min * hR;
    }
    return amount;
}
int main() {
    double hourlyRate;
    double consultationTime;
    double totalIncome;
    bool income;
    double amount;
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout<<"Please enter the hourly rate "<<endl;
    cin>>hourlyRate;
    cout<<"Please enter the total consultation time in minutes: "<<endl;
    cin>>consultationTime;
    cout<<"Please enter the total income "<<endl;
    cin>>totalIncome;
    income=isLowIncome(totalIncome);
    amount=billingAmount(hourlyRate, consultationTime, income);
    cout<<"The billing amount is "<<amount;
    return 0;
}
