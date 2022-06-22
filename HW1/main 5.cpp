#include <iostream>
using namespace std;

const int deliveryRol=5000;
const int publishRol=20000;
const double royalRateOp2=0.125;
const double royalRateOp3Below4000=0.1;
const double royalRateOp3Above4000=0.14;

int main() {
    int copies;
    double price;
    double royalty1;
    double royalty2;
    double royalty3;
    cout<<"Please input the net price for each copy"<<endl;
    cin>>price;
    cout<<"Please input the estimated numbers that will be sold:"<<endl;
    cin>>copies;
    royalty1=deliveryRol+publishRol;
    royalty2=royalRateOp2*copies*price;
    royalty3=royalRateOp3Below4000*4000*price+royalRateOp3Above4000*(copies-4000)*price;
    int max;
    cout<<"The first option royalty is "<<royalty1<<endl;
    cout<<"The second option royalty is "<<royalty2<<endl;
    cout<<"The third option royalty is "<<royalty3<<endl;
    cout <<"The best option to choose is ";
    if (royalty1>=royalty2 && royalty1>=royalty3)
        cout<<"Option 1";
    else if (royalty2>=royalty1 && royalty2>=royalty3)
        cout<<"Option 2";
    else
        cout<<"Option 3";
    return 0;
}
