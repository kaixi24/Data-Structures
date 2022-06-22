#include <iostream>
using namespace std;

int computeFactorial(int n){
    if (n==0) return 1;
    else
        return computeFactorial(n-1)*n;
}

int computeFibonacci(int n){
    if (n==1) {
      return 1;
    }
    else if (n==2) {
        return 1;
    }
    else {
        return computeFibonacci(n-2) + computeFibonacci(n - 1);
    }
}

int main() {
    int n;
    cout<<"Please input a non negative integer number n to compute n!"<<endl;
    cin>>n;
    cout<<"The factorial is "<<computeFactorial(n)<<endl;

    int m;
    cout<<"Please input a positive integer number to show the first m numbers in a Fibonacci sequence"<<endl;
    cin>>m;
    cout<<"The first "<<m<<" number in Fibonacci sequence are"<<endl;
    for (int i=1; i<=m; i++){
        cout<<computeFibonacci(i)<<endl;
    }

    return 0;
}
