#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{

    cout<<"Exiting...";
    //to come out of infinte loop condition we can use exit method.
    exit(10);
    //program terminates here
    //this line will not be printed.

    cout<<"After exit method.";
    return 0;
}