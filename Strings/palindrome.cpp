#include<pranav.h>
#include<string>
using namespace std;

bool isPalindrome(char* str){
    int i=0,j=0;
    for(;str[j]!='\0';j++){}
    j=j-1;
    while(i!=j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    char str[]="madam";
    cout<<isPalindrome(str);
    return 0;
}