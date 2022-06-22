#include <iostream>
using namespace std;
#include <algorithm>

//Sequential Search
int sequentialSearch(int arr[], int length, int target){
    bool found=false;
    int loc=0;
    while (loc<length && found!=true){
        if (arr[loc]==target)
            found=true;
        else
            loc++;
    }
    if (found)
        return loc;
    else
        return -1;
}

//binary search
int binarySearch(int arr[], int length, int target){
  int left=0;
  int right=length-1;
  bool found=false;
  int mid;
  while (left<=right && !found) {
      mid=left+(right-left)/2;
      if (arr[mid] > target) {
          right = mid-1;
      } else if (arr[mid] < target)
          left = mid + 1;
      else {
          found = true;
      }
  }
  if (found)
      return mid;
  else
      return -1;
}

//Bubble sort
void bubbleSort(int arr[], int size){
    for (int i=0; i<size; i++){
        int j=i+1;
        while (j+1 < size){
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
            j++;
        }
    }
    cout<<"The numbers after bubble sort is:"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

//selection sort
void selectionSort(int arr[], int size){
    for (int j=0; j<size; j++) {
        int min = arr[j];
        int record = j;
        for (int i = j; i < size; i++) {
            if (arr[i] < min) {
                min = arr[i];
                record = i;
            }
        }
        swap(arr[j], arr[record]);
    }
    cout<<"The numbers after selection sort is:"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

//insertion sort
void insertionSort(int arr[], int size){
    for (int i=0; i<size; i++){
        int record=arr[i];
        int j=i-1;
        while ((j>=0 && arr[j]>record)){
                arr[j+1]=arr[j];
                j--;
            }
        arr[j+1]=record;
    }
    cout<<"The numbers after insertion sort is:"<<endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    int arr[10]={0,1,2,5,3,10,36,54,687,5};
    //search the number of 10 and return the index

    //sequential search
    //Time Complexity is O(N)
    int location;
    location=sequentialSearch(arr,10,10);
    cout<<"The location is at "<<location<<endl;

   //Binary search
    //Time Complexity is O(log(N))
    int arr1[10]={0,1,2,3,4,5,6,7,8,9};
    location= binarySearch(arr1,10,4);
    cout<<"The location is at "<<location<<endl;

    //bubble sort
    //Time complexity is O(N^2)
    int arr3[10]={0,1,2,5,3,10,36,54,687,5};
    bubbleSort(arr3,10);

    //selection sort
    //Time complexity is O(N^2)
    int arr4[10]={0,1,2,5,3,10,36,54,687,5};
    selectionSort(arr4,10);

    //insertion sort
    //Time complexity is O(N^2)
    int arr5[10]={0,1,2,5,3,10,36,54,687,5};
    insertionSort(arr5,10);

    return 0;
}
