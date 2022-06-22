#include <iostream>
#include "bookType.h"
#include "bookType.cpp"
#include <vector>
#include <string>
using namespace std;

int main() {
    string arr1[4]={"JK Rowling"};
    string arr2[4]={"Jane"};
    bookType bookType1[100];
   // (string title, string *author, string pub, string ISBN, double Price, int copyNumber, int authorNumber){
    bookType1[0]={"Harry Potter",arr1,"123","FSAHB230",120.0,32400,1};
    bookType1[1]={"Jane Jones", arr2, "THUS", "765434", 90323, 9860, 1};
    vector <bookType> vec;
    vec.push_back(bookType1[0]); //push back function
    vec.push_back(bookType1[1]);
    for (int i=0; i<2; i++){ //magic number is for testing only
        vec[i].printinfo();
    }
    if (vec.empty()) cout<<"true"<<endl; //empty function
    else cout<<"false"<<endl;

    vec.pop_back();//pop back function
    vec.pop_back();
    if (vec.empty()) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    vector <bookType> vec1;
    vec1.push_back(bookType1[0]);
    auto it=vec.begin();
    vec.insert(it,vec1.begin(),vec1.end()); //Insert function
    vec[0].printinfo();

    vec.erase(vec.begin(),vec.end()); //Erase function
    if (vec.empty()) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
