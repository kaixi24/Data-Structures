#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int num;
    cout << "Please input the integers, end the input with a return " <<endl;
    while (cin>>num){
        vec.push_back(num);
        if (getchar()=='\n')
            break;
    }
    cout<<"The input integers are: ";
    for (auto i :vec){
        cout<<i<<" ";
    }
    return 0;
}
