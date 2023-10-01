#include<iostream>
using namespace std;

//parameterized function for sum printing
//sum and n are parameters

void printSum(int sum,int n){
  if(n<1){
    cout<<sum;
    return;
  }
  printSum(sum+n,n-1);  
}
int main(){
  int n,sum=0;
  cin>>n;
  printSum(sum,n);
  return 0;
}
