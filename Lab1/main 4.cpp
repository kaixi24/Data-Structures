#include <iostream>
using namespace std;

int main() {
    int accountNumber;
    cout<<"Please type in the account number (int type)"<<endl;
    cin>>accountNumber;
    char type;
    cout<<"Please type your account type: "<<endl;
    cin>>type;
    double minBalance;
    cout<<"Please enter the minimum balance the account should maintain:"<<endl;
    cin>>minBalance;
    double currentBalance;
    cout<<"Please enter the current balance is:"<<endl;
    cin>>currentBalance;
    if(type=='S'||type=='s'){
        if (currentBalance<minBalance) currentBalance-=10;
        else currentBalance*=(1+0.04);
    }
    if (type=='c'||type=='C'){
        if (currentBalance<minBalance) currentBalance-=25;
        else if (currentBalance<=5000) currentBalance+=currentBalance*0.03;
        else if (currentBalance>5000)  currentBalance+=currentBalance*0.05;
    }
    cout<<"The account number is "<<accountNumber<<endl;
    cout<<"The account type is "<<type<<endl;
    cout<<"The minimum balance that the account should maintain is "<<minBalance<<endl;
    cout<<"The current balance is "<<currentBalance<<endl;
    return 0;
}
