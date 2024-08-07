#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[]="How are you";
    cout<<s<<endl;
    int word=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' ' && s[i-1]!=' '){
            word++;
        }
    }
    cout<<"Number of words are: "<<word+1<<endl;
    return 0;
}