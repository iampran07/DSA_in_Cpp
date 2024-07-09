#include<iostream>
using namespace std;

void backtracking(int i,int n){
    if(i<1) return;
    backtracking(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    backtracking(n,n);  
    return 0;
}