#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
const int no_students=5;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void readData(ifstream &inFile, studentType arr[],int no_students){
    for ( int i=0 ; i<no_students; i++){
        inFile>>arr[i].studentFName>>arr[i].studentLName>>arr[i].testScore;
    }

};

void assignGrade (char &grade, studentType arr[],int no_students){
    for (int i=0;i<no_students; i++){
        if (arr[i].testScore>85)  grade='A';
        else if (arr[i].testScore>75) grade='B';
        else if (arr[i].testScore>60) grade='C';
        else grade='D';
    }
};

int highestScore (studentType arr[], int no_students){
    int max=arr[0].testScore;
    for (int i=0; i<no_students; i++){
        if (arr[i].testScore>max)
            max=arr[i].testScore;
    }
    return max;
};

void printResults(ofstream &outFile, int highest_score,studentType arr[],int no_students){
    for (int i=0; i< no_students; i++){
        if (arr[i].testScore==highest_score){
            outFile<<" The student name is "<< arr[i].studentFName<<" ";
            outFile<< arr[i].studentLName;
        }
    }
};

int main() {
    char grade;
    studentType arr[no_students];
    ifstream inFile;
    ofstream outFile;
    inFile.open ("input.txt");
    outFile.open("Output.txt");
    outFile<<fixed<<showpoint<<setprecision(2);
    cout<<"Processing data"<<endl;
    if (!inFile){
        cout<<"No file"<<endl;
    }
    readData(inFile,arr,no_students);
    assignGrade (grade, arr,no_students);
    int highest_score=highestScore(arr,no_students);
    printResults(outFile,highest_score,arr,no_students);

    inFile.close();
    outFile.close();
    return 0;
}
