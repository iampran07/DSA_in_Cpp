/*
Pattern to print
D
CD
BCD
ABCD
*/

#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='D'-i+j;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;

        
    }
}