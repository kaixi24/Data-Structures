#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string,double> myMap;
    multimap<string, double> myMap1;

    myMap.insert({"John",200.4});
    myMap.insert({"John",200.4});
    myMap.insert(pair<string,double>("Jill",300.5));
    myMap.insert(pair<string,double>("Tom",50.1));
    myMap.insert(pair<string,double>("May",10.9));
    map<string,double>::iterator it;
    /*Another method to traverse the map
    for (auto i:myMap){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
     */
    for (it = myMap.begin(); it != myMap.end(); it++){
        cout<< it->first<<" "<<it ->second<<endl;
    }
    cout<<"End of the using Map demonstration"<<endl;
    cout<<"Start of the using Multimap demonstration"<<endl;

  //To demonstrate the difference between using a map and multimap
    myMap1.insert({"Alice",65.2});
    myMap1.insert({"John",78.2});
    myMap1.insert({"Alice",50.9});
    for (auto t:myMap1){
        cout<<t.first<<" ";
        cout<<t.second<<endl;
    }
    return 0;
}
