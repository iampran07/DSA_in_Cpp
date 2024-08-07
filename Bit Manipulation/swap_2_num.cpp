#include<iostream>
using namespace std;


int main() {
    int a=10, b=11;
    cout<<"Before Swapping: "<<a <<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
           cout<<"after Swapping: "<<a <<" "<<b<<endl;
 
    return 0;
}