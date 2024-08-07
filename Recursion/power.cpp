#include<iostream>
using namespace std;

int power(int m, int n){
    if(n==1) return m;
    return power(m,n-1)*m;
}

int main() {
    cout<<power(3,4);
    return 0;
}