#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int number1,number2;
    set<int>mySet1;
    set<int>mySet2;
    cout<<"Please enter the number you want to put in for the 1st set"<<endl;
    cin>>number1;
    int num;
    for (int i=0; i<number1; i++){
        cout<<"Enter the number now:"<<endl;
        cin>>num;
        mySet1.insert(num);
    }
    set<int>::iterator it1,it3;
    it1=mySet1.begin();
    it3=mySet1.end();

    cout<<"Please enter the number you want to put in for the 2nd set"<<endl;
    cin>>number2;
    int num2;
    for (int i=0; i<number2; i++){
        cout<<"Enter the number now:"<<endl;
        cin>>num2;
        mySet2.insert(num2);
    }
    set<int>::iterator it2,it4;
    it2=mySet2.begin();
    it4=mySet2.end();

    set<int>myUnionSet;
    set<int>::iterator itUnion;
    set_union(it1,it3,it2,it4,inserter(myUnionSet,myUnionSet.end()));
    cout<<"The union set is "<<endl;
    for (itUnion=myUnionSet.begin(); itUnion!=myUnionSet.end(); ++itUnion)
        cout << ' ' << *itUnion;
    cout<<endl;


    set<int>myIntercetionSet;
    set<int>::iterator itIntercetion;
    set_intersection(it1,it3,it2,it4,inserter(myIntercetionSet,myIntercetionSet.end()));
    if(myIntercetionSet.size()==0)
        cout<<"There are no common elements"<<endl;
    else{
    cout<<"The intercetion set is "<<endl;
    for (itIntercetion=myIntercetionSet.begin(); itIntercetion!=myIntercetionSet.end(); ++itIntercetion)
        cout << ' ' << *itIntercetion;
    cout<<endl;
    }

    set<int>setDifference;
    set<int>::iterator itSetDifference;
    set_difference(it1,it3,it2,it4,inserter(setDifference,setDifference.end()));
    if (setDifference.size()==0)
        cout<<"There is no set difference"<<endl;
    else {
        cout << "The set difference is " << endl;
        for (itSetDifference = setDifference.begin(); itSetDifference != setDifference.end(); ++itSetDifference)
            cout << ' ' << *itSetDifference;
        cout << endl;
    }

    return 0;
}
