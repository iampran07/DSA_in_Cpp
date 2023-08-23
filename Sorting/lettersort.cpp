#include<iostream>
using namespace std;
int main(){

    char word[10];
    cout<<"\nEnter a word: ";
    for(int i=0;i<20;i++){
        cin>>word[i];
    }
    cout<<"\nWord is: ";
    for(int i=0;i<20;i++){
        cout<<word[i]<<"";
    }

}