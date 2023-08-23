#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5]={23,89,10,78,19};
    int index=linearsearch(arr,5,89);
    if(index==-1){
        cout<<"Not Found";
    }else{
        cout<<"89 is present at "<<index;
    }
    return 0;
}