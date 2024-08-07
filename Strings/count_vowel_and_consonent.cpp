#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[]="How are you";
    cout<<s<<endl;
    int i,vowel=0,consonent=0;
    for(i=0;s[i]!='\0';i++){
        if((s[i]=='a' || s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u') ||
           (s[i]=='A' || s[i]=='E' ||s[i]=='I'||s[i]=='O'||s[i]=='U'))
            vowel++;
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            consonent++;   
    }
    cout<<"Vowels are : "<<vowel;
    cout<<"Consonents are : "<<consonent;
    return 0;
}