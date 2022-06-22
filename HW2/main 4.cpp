#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int CONV=100;

int main() {
    cout<<fixed<<setprecision(2);
    int totalVotes=0;
    string candi[5];
    int votes[5];
    for (int i=0; i<5; i++){
        cout<<"Enter the name"<<endl;
        cin>>candi[i];
        cout<<"Enter the votes received"<<endl;
        cin>>votes[i];
        totalVotes+=votes[i];
    }
    cout<<"Candidate"<<setw(20)<<"Votes Received"<<setw(20)<<"% of Total Votes"<<endl;
    string name =candi[0];
    int max=votes[0];
    for (int i=0; i<5; i++){
        if (votes[i]>max){
            max=votes[i];
            name=candi[i];
        }
        cout<<candi[i]<<setw(20)<<votes[i]<<setw(20)<<votes[i]*1.0/totalVotes*CONV<<"%"<<endl;
    }
    cout<<"Total"<<setw(20)<<totalVotes<<endl;
    cout<<"The Winner of the Election is "<<name<<endl;
    return 0;
}
