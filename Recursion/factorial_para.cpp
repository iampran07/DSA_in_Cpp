#include<iostream>
using namespace std;

//factorial from 1 to N using parametrised recursion

void print(int fact,int n){
    if(n<1){
        cout<<fact;
        return;
    }
    print(fact*n,n-1);
}

int main(){
    int n,fact=1;
    cin>>n;
    print(fact,n);
    return 0;
}
