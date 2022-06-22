#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int arr[8];
    int j=0;
    cout << "Please enter an telephone number expressed in letters" << endl;
    getline(cin,str);
    for (int i=0; i<str.size(); i++) {
        if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c' || str[i] == 'A' || str[i] == 'B' || str[i] == 'C'){
            arr[j] = 2;
            j++;}
        else if (str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F'){
            arr[j] = 3; j++;}
        else if (str[i] == 'g' || str[i] == 'h' || str[i] == 'i' || str[i] == 'G' || str[i] == 'H' || str[i] == 'I'){
            arr[j] = 4; j++;}
        else if (str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L'){
            arr[j] = 5; j++;}
        else if (str[i] == 'm' || str[i] == 'n' || str[i] == 'o' || str[i] == 'M' || str[i] == 'N' || str[i] == 'O'){
            arr[j] = 6; j++;}
        else if (str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 'P' || str[i] == 'Q' ||
                 str[i] == 'R' || str[i] == 'S'){
            arr[j] = 7; j++;}
        else if (str[i] == 't' || str[i] == 'u' || str[i] == 'v' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V'){
            arr[j] = 8; j++;}
        else if (str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z' || str[i] == 'W' || str[i] == 'X' ||
                 str[i] == 'Y' || str[i] == 'Z'){
            arr[j] = 9; j++;}
        else if (str[i] == ' ') continue;
        else {
            cout<<"Error, Please input again."<<endl;
        }
    }
    cout<<"The telephone number is: ";
    for (int j=0; j<3; j++)
        cout<<arr[j];
    cout<<"-";
    for (int j=3; j<7; j++)
        cout<<arr[j];
    return 0;
}
