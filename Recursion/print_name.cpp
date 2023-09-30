//
//  Recursion2.cpp
//  VSCode
//
//  Created by Pranav on 30/09/23.
//

#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n)
        return;
    cout<<"Pranav"<<endl;
    print(i+1,n);
}

int main(){
    int i=1,n;
    cout<<"\nHow many times do you want to repeat ur name? ";
    cin>>n;
    print(i,n);
    return 0;
}
