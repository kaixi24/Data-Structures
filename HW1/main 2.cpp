#include <iostream>
using namespace std;

int main() {
    double length, radius, requiredSpace;
    cout << "Please help input the length of the yard" << endl;
    cin>>length;
    cout<<"Please help input the radius of a fully grown tree"<<endl;
    cin>>radius;
    cout<<"Please help input the required space between fully grown trees"<<endl;
    cin>>requiredSpace;
    int number;
    number=length/(2* radius+requiredSpace);
    cout<<"The number of trees that can be planted is "<<number<<endl;
    float totalspace;
    totalspace=2*number*radius;
    cout<<"The total space that will be occupied by the fully grown trees is "<<totalspace;
    return 0;
}
