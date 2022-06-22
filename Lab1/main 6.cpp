#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int num;
    cout<<"Please help input a set of integers: "<<endl;
    while (cin>>num){
        v.push_back(num);
        if (getchar() == '\n')
            break;
    }
    int evenSum=0, oddSum=0;
    for (int i=0; i<v.size(); i++){
        if (v[i]%2==1)
            oddSum+=v[i];
        else
            evenSum+=v[i];
    }
    cout<<"The sum of even integers is "<<evenSum<<endl;
    cout<<"The sum of odd integers is "<<oddSum;
    return 0;
}
