#include<iostream>
using namespace std;

int main(){
    int a,b;
     char ch,chce;
    do{
    cout<<"\nEnter two numbers:";
    cin>>a;
    cin>>b;
    cout<<"\nEnter a operation you want to perform: ";
    cout<<"\n +  ";
    cout<<"\n - ";
    cout<<"\n * ";
    cout<<"\n / ";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"\nYour addition is: "<<a+b;
        break;

        case '-':
        cout<<"\nYour substraction is: "<<a-b;
        break;

        case '*':
        cout<<"\nYour multiplication is : "<<a*b;
        break;

        case '/':
        cout<<"\nYour division is: "<<a/b;
        break;

        default:
        cout<<"\nEnter a correct operation.";
        break;
    }
    cout<<"\nDo you want to continue?(Y/N)";
    cin>>chce;
}while(chce=='y' || chce=='Y');
return 0;
}