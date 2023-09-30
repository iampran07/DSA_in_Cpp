#include<iostream>
using namespace std;

/*
 <--- backtracking algorithm --->
 here the function has input values i and n
 both i and n are having same value
 the base condition is i<1 . So,when i=0 it will return
 then we are going to print latest value of i stored in stack space.
 
*/
void print(int i,int n){
    if(i<1)
        return;
    print(i-1,n);
    cout<<i<<endl;
}

int main()
{
    int i,n;
    cout<<"enter value: ";
    cin>>n;
    i=n;
    print(i,n);
    return 0;
}
