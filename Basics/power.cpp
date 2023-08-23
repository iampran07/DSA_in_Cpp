#include<iostream>
using namespace std;

void power(){
    int a,b,ans=1;
    cin>>a>>b;
    
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    cout<<ans;
    
}
int main(){
    power();
    return 0;
}