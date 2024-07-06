#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void lcmAndgcd(int a,int b){
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<(a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cin>>a>>b;
    lcmAndgcd(a,b);
    return 0;
}