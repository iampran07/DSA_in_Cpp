#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int reverse=0;
    while(number!=0){
        int reminder=number%10;
        if((reverse>INT_MAX/10)||(reverse<INT_MIN/10)){
            return 0;
        }else{

        
        reverse=reverse*10+reminder;
        number=number/10;
    }
    }
    cout<<reverse;
    
    return 0;
}
