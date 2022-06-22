#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double radius;
    double height;
    double volume;
    double side;
    cout << "Please help input the radius of the base" <<endl;
    cin>> radius;
    cout<<"Please help input the height of the cylindrical"<<endl;
    cin>>height;
    volume= height* M_PI * pow(radius,2);
    side=pow(volume, 1/3.0);
    cout<<"The side of a cube with the same volume as the cylindrical container is "<<side;
    return 0;
}
