#include<math.h>
#include<iostream>
using namespace std;

void printDivisors(int n){
    cout<<"Divisors of "<<n<<" are: ";
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i)
                cout<<i<<" ";
            else
                cout<<i<<" "<<n/i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}
