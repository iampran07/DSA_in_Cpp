#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s[]="WeLcOmE";
    cout<<s<<endl;
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=97)
            s[i]=s[i]-32; 
        else
            s[i]=s[i]+32;    
    }
    cout<<s;
    return 0;
}