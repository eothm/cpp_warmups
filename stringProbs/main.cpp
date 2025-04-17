#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string reversed =str;
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(reversed[i], reversed[n - i - 1]);
    }
    return reversed;
}

bool isPalindrome(string str){
    for (int i=0; i<str.length()/2;i++){
        if (str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;
}
int nbrOfVowels(string str){
    int count =0;
    for (int i=0; i<str.length();i++){
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}
int nbrOfConsonants(string str){
    int count =0;
    for (int i=0; i<str.length();i++){
        if (str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
            count++;
        }
    }
    return count;
}

string removeSpaces(string str){
    string newStr;
    for (int i=0; i<str.length();i++){
        if (str[i]!=' '){
            newStr+=str[i];
        }
    }
    return newStr;
}
void sortLetters(string& str){
    for (int i=1; i<str.length();i++){
        for(int j=0; j<(str.length()-i);j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
}
int main(){
    string str;
    cout<<"Enter a string";
    getline(cin,str);
    cout<<endl;
    cout<<"The reversed string is: "<<reverseString(str)<<endl;
    cout<<"The string is: "<<(isPalindrome(str)?"":"not ")<<"a palindrome"<<endl;
    cout<<"The number of vowels in the string is: "<<nbrOfVowels(str)<<endl;
    cout<<"The number of consonants in the string is: "<<nbrOfConsonants(str)<<endl;
    cout<<"The string without spaces is: "<<removeSpaces(str)<<endl;
    sortLetters(str);
    cout<<"The sorted string: "<<str<<endl;
}