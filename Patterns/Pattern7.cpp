/*
Pattern to print
1 
2 1 
3 2 1 
4 3 2 1 
*/

#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    //int count=1;
    cin>>n;
    while(i<=n){
        //int count=1;
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            
            j++;
        }
        i++;
        cout<<endl;
        
    }
}