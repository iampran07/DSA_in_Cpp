#include<iostream>
using namespace std;

//factorial of 1 to N numbers using functional recursion

int print(int n){
    if(n<2){
        return 1;
    }
    return n*print(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<print(n);
    return 0;
}
