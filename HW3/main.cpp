#include <iostream>
#include<string>
#include <iomanip>
#include <fstream>
using namespace std;

const double TAX_RATE=0.05;

struct menuItemType{
    string menuItem;
    double menuPrice;
};

void getData( ifstream &inFile, menuItemType mlist[], int size){
    string s;
    if (!inFile){
        cout<<"Error";
    }
    for (int i=0; i<size; i++){
        getline(inFile,s);
        string s1=s;
        mlist[i].menuItem=s.substr(0,s.find('$')+1);
        mlist[i].menuPrice=stod(s1.substr(s1.find('$')+1));
    }
};
void showMenu(menuItemType mlist[], int size){
    cout<<"Welcome to Johnny's restaurant."<<endl;
    for (int i=0; i<size; i++){
    cout<<setw(10)<<mlist[i].menuItem<<mlist[i].menuPrice<<endl;
    }
};
void makeSelection(menuItemType mlist[],string str[]){
    cout << "Please choose whatever you like, and end the typing with NULL" << endl;
    int i=0;
    while (getline(cin, str[i])) {
        if (str[i]=="NULL")
            break;
        i++;
    }
    cout<<"End of the input"<<endl;
};
void printCheck (string str[],menuItemType mlist[],int size){
    cout<<"Welcome to Johnny's Restaurant:"<<endl;
    double count = 0;
    double tax=0;
    string s1,s2;
    for (int i = 0; i < size; i++) {
        for (int j =0; j < size; j++) {
            s1=str[i].substr(0,3);
            s2=mlist[j].menuItem.substr(0,3);
            if (s1==s2 && str[i].length()!=0){
                count+= mlist[j].menuPrice;
                cout<<setw(10)<<mlist[j].menuItem<<mlist[j].menuPrice<<endl;
            }
        }
    }
    tax=count*TAX_RATE;
    count+=tax;
    cout<<"Tax"<<setw(15)<<"$"<<tax<<endl;
    cout<<"Amount Due"<<setw(8)<<"$"<<count<<endl;
};

bool isItemSelected(string str[]){
    if (str[0].length()!=0) return true;
    else return false;
}

int main() {
   menuItemType menuList[8];
   string str[8];
   ifstream inFile;
   inFile.open("new.txt");
   cout<<fixed<<showpoint<<setprecision(2);
   getData(inFile,menuList,8);
   showMenu(menuList,8);
   makeSelection(menuList,str);
    if (isItemSelected(str)) printCheck(str,menuList,8);
    inFile.close();

    return 0;
}
