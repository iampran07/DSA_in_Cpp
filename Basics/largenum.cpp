#include<iostream>
using namespace std;
int main(){
    
    int arr[5]={100,200,534,792,390};
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}