#include <iostream>
using namespace std;
#include <string>

/*tell whether the character is vowel or not */
bool isVowel(char s){
    if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
        return true;
    else
        return false;
}

/* to modify the string and remove the vowels */
void removeVowel(string &s){
    for (int i=0; i<s.length(); i++){
        if (isVowel(s[i])){
             s= s.substr(0,i)+s.substr(i+1);
        }
    }
}
int main() {
    string s;
    cout << "Please input a string:" <<endl;
    cin>>s;
    removeVowel(s);
    cout<<"The string is ";
    for (int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<" after removing the vowels.";
    return 0;
}
