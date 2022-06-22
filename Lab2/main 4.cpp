#include <iostream>
using namespace std;

int main() {
    double arr[50];
    for (int i=0; i<25; i++){
        arr[i]=i*i;
    }
    for (int i=25; i<50; i++){
        arr[i]=3*i;
    }
    for (int i =0; i<50; i++){
        cout<<arr[i]<<" ";
        if (i==9||i==19||i==29||i==39||i==49){
            cout<<endl;
        }
    }
    return 0;
}
