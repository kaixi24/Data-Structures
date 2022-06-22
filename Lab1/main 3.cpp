#include <iostream>
using namespace std;

int main() {
    double hours;
    double PayPreTax, PayPostTax;
    double payrate;
    cout<<"Please enter the hours you worked this summer for each week"<<endl;
    cin>>hours;
    cout<<"Please enter the payrate for each hour"<<endl;
    cin>>payrate;
    cout<<endl;
    PayPreTax= payrate*hours*5;
    PayPostTax=PayPreTax*(1-0.14);
    cout<<"The income before tax is $"<< PayPreTax <<endl;
    cout<<"The income after tax is $"<< PayPostTax<< endl;
    double MoneySpentOnClothes;
    MoneySpentOnClothes=PayPostTax* 0.1;
    cout<<"The money you spend on clothes and other accessories is $"<< MoneySpentOnClothes <<endl;
    cout<<"The money you spend on school supplies is $"<<PayPostTax*0.01<<endl;
    cout<<"The money you spend on bonds is $"<< PayPostTax*(1-0.11)*0.25<<endl;
    cout<<"The money your parents spend on bonds is $"<< PayPostTax*(1-0.11)*0.25*0.5<<endl;
    return 0;
}
