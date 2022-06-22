#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target){
 if (right>=left) {
     int mid = left + (right - left) / 2;
     if (arr[mid]==target)
         return mid;
     else if (arr[mid]>target)
         return binarySearch(arr,left,mid-1,target);
     else
         return binarySearch(arr,mid+1,right,target);
 }
 return -1;
}
int main() {
    int arr1[10]={0,1,2,3,4,5,6,7,8,9};
    int location= binarySearch(arr1,0,9,4);
    cout<<"The location is at "<<location<<endl;
    return 0;
}
