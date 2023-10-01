#include<iostream>
using namespace std;

//function is recursively calling itself
//will return value 
//O(N)
int print(int n){
    if(n<1)
        return 0;
    return n+print(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<print(n);
    return 0;
}
