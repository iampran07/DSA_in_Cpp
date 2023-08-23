#include<iostream>
using namespace std;

void fibbfun(int n){
    int next,a=0,b=1;
    
    for(int i=1;i<=n;i++){
         next=a+b;
        a=b;
        b=next;
    }
    cout<<next;
}

int main(){
    int n;
    cin>>n;
    fibbfun(n);
    return 0;
}