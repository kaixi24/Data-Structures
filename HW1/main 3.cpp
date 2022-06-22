#include <iostream>
using namespace std;

int main() {
    int popA, popB;
    double rateA, rateB;
    cout<<"Please input the population of town A:"<<endl;
    cin>> popA;
    cout<<"Please input the interest rate of town A"<<endl;
    cin>>rateA;
    cout<<"Please input the population of town B:"<<endl;
    cin>> popB;
    cout<<"Please input the interest rate of town B"<<endl;
    cin>>rateB;
    int count=0;
    while (popA<popB){
     popA*=(1+rateA);
     popB*=(1+rateB);
     count++;
    }
    cout<<count<<" years later the population of town A will be greater "
                 "than or equal to the population of town B ";
    return 0;
}
