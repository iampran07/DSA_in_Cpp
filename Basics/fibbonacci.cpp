//0 1 1 2 3 5 8 13 21 34 55 89

#include<iostream>
using namespace std;
int main(){
    int n=10,a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}