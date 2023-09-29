#include<pranav.h>
using namespace std;

int main()
{
    stack<int>s1;
    //stack follow LIFO principle. 
    //3 main operations are present:-
    //1.push
    //2.pop
    //3.top
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    //push and pop --> log(n)
    //top --> O(1)
   //to print
   while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
   }

   //to delete
   s1.pop();

   //top element
   cout<<s1.top();

   //same functions as that of vectors
}
