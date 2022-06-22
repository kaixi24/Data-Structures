#include <iostream>
using namespace std;

int main() {
    int time;
    int hour, min, sec;
    cout<<"Please input the time elapsed in seconds."<<endl;
    cin>> time;
    hour=time/3600;
    min=(time%3600)/60;
    sec=(time%3600)%60;
    cout<<"The output is "<< hour<<":"<<min<<":"<< sec;
    return 0;
}
