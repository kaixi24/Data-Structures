#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a positive integer between 1 to 1000(inclusive):" <<endl;
    cin>>number;
    if (number==2||number==3||number==5||number==7||number==11||
    number==13||number==17||number==19||number==23||number==29||number==31)
        cout<<"The number is a prime number."<<endl;
    else if (number%2!=0&& number%3!=0 && number%5!=0 && number%7!=0 && number%11!=0
    && number%13!=0 && number%17!=0&& number%19!=0 && number%23!=0 && number%29!=0 && number%31!=0)
        cout<<"The number is a prime number."<<endl;
    else {
        cout<<"The number is not a prime number."<<endl;
        cout<<"The numbers from the list are:";
        if (number%2==0)
            cout<<"2 ";
        if (number%3==0)
            cout<<"3 ";
        if (number%5==0)
            cout<<"5 ";
        if (number%7==0)
            cout<<"7 ";
        if (number%11==0)
            cout<<"11 ";
         if (number%13==0)
             cout<<"13 ";
         if (number%17==0)
             cout<<"17 ";
         if (number%19==00)
             cout<<"19 ";
         if(number%23==0)
             cout<<"23 ";
         if (number%29==0)
             cout<<"29 ";
         if (number%31==0)
             cout<<"31 ";
    }
    return 0;
}
