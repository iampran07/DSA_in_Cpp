//
//  Recursion2.cpp
//  VSCode
//
//  Created by Pranav on 30/09/23.
//

#include<iostream>
using namespace std;

void print(int n){
    if(n<1)
        return;
    cout<<n<<endl;
    print(n-1);
}

int main(){
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    print(n);
    return 0;
}
