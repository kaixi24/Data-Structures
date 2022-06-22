#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double NumberofLiters;
    double cost;
    double profits;
    cout<<"Please enter the total amount of ";
    cout<< "milk produced in the morning in Liter"<<endl;
    cin>>NumberofLiters;
    int NumberOfCarton;
    NumberOfCarton=round(NumberofLiters/3.78+0.5); //Round to the ceiling
    cost=0.38*NumberofLiters;
    profits=0.27* NumberOfCarton;
    cout<<"The number of cartons needed to hold milk is " <<NumberOfCarton<<endl;
    cout<<"The cost of producing milk is $"<<cost<<endl;
    cout<<"The profit of producing the milk is $"<<profits<<endl;
    return 0;
}
