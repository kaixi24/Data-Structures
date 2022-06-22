#include <iostream>
using namespace std;

/* to tell whether a certain character is vowel or not*/
bool isVowel(char &s){
    if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
        return true;
    else
        return false;
}

int main() {
    char s;
    cout << "Please input a character:" <<endl;
    cin>>s;
    if (isVowel(s))
        cout<<"Your character is a vowel.";
    else
        cout<<"Your character is not a vowel.";
    return 0;
}
