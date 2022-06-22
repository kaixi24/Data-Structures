#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {
    set<int> mySet;
    int num;
    set<int>::iterator it;
    for(int i=0; i<=5; i++){
        cout<<"Enter a number"<<endl;
        cin>>num;
        mySet.insert(num);
    }
    for (it=mySet.begin(); it!=mySet.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}
