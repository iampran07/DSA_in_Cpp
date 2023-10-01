#include<iostream>
#include<string>
using namespace std;

//palindrome is given string and its reverse is read same.
//if it is palindrome it will return true/1 else false/0.

bool checkPalindrome(string &s,int i){
    if(i>=(s.size()/2))  //base condition
        return true;  //1
    if(s[i]!=s[s.size()-i-1])
        return false; //0
    return checkPalindrome(s,i+1);
}

int main()
{
    string s;
    getline(cin,s);
    cout<<checkPalindrome(s,0)<<endl;
    return 0;
}
