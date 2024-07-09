#include<iostream>
using namespace std;


//hasing is method of prefetching and storing
//basic example to count number of elements in array.
//if declare array inside main --> arr[10^6];
//but if globally --> arr[10^7];

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //prefetching method
    
    int hash[13]={0}; //just beacuse we only have to show max 12 elements so 13 spaces                       required.
    for(int i=0;i<n;i++){
        hash[arr[i]] ++;
    }
    
    
    //fetching method
    
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
}
