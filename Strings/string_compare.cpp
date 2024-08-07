#include<iostream>
#include<string>
using namespace std;

int stringCompare(string s1, string s2){
    int i,j;
    for(i=0,j=0; s1[i]!='\0'&&s2[i]!='\0'; i++,j++){
        if(s1[i]!=s2[j]) break;
    }

    if(s1[i]=='\0' && s2[j]!='\0'){
        if(s1[i-1]<s2[j]) return 1;
        if(s1[i-1]>s2[j]) return -1;
    }

    if(s1[i]!='\0' && s2[j]=='\0'){
        if(s1[i]<s2[j-1]) return 1;
        if(s1[i]>s2[j-1]) return -1;
    }

    if(s1[i]<s2[j]) return 1;
    if(s1[i]>s2[j]) return -1;
    return 0;
}

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int ans=stringCompare(s1,s2);
    cout<<ans;
    return 0;
}