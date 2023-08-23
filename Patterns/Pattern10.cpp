/*
Pattern to print
AAA
BBB
CCC
*/

#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    int ch=65;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;

        
    }
}