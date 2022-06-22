#include <iostream>
using namespace std;

/* to tell whether a number is negative or not */
bool isNegative(int num){
    if (num<0)
        return true;
    else return false;
}

/* to reverse the digit */
int reverseDigit(int num){
    int res=0;
    int digit;
    while (num>0){
        digit=num%10;
        num=num/10;
        res=res*10+digit;
    }
    return res;
}

int main() {
    int num;
    bool negative;
    cout << "Please enter the number:" << endl;
    cin>>num;
    negative= isNegative(num);
    if (num<0)  num=num*(-1);
    int number= reverseDigit(num);
    if (negative)
        number=number*(-1);
    cout<<"The value of the reversed digit is "<<number;
    return 0;
}
