#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    cout<<"Please enter a list of the flower names, end the input with -1"<<endl;
    string str;
    stack <string> s1;
    while (str!="-1"){
        getline(cin,str);
        s1.push(str);
    }
    s1.pop();
    cout<<"Flowers are: "<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<"in a reversed order";
    return 0;
}
