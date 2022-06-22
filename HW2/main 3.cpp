#include <iostream>
#include <string>
using namespace std;
const int CONV=32;

int main() {
    string num;
    int size=0;
    cout<<"Please input a string:";
    getline(cin,num);
    size=num.length();
    char arr[size];
    for (int i=0; i<size; i++){
        if (num[i]>='a'&& num[i]<='z'){
            arr[i] =num[i]-CONV;
            cout<<arr[i];}
        else
            cout<<num[i];
    }
    return 0;
}
