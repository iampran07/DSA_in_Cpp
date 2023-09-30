#include<iostream>
using namespace std;

//function calls itself until base condition gets satisfied.
//this function call stored in stack called as stack overflow or stack space.
//this is stored in tree structured manner.
void print(int count){
//this is the base condition.
    if(count==3){
        return;
    }
    cout<<count<<endl;
    count++;
    print(count);
}

int main(){
    int count=0;
    print(count);
    return 0;
}
