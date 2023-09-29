#include<pranav.h>
using namespace std;
int main()
{
    queue<int>q1;
    //queue is same as stack but it follow FIFO principle
    //there are 4 main operations:
    //1.push or emplace
    //2.pop
    //3.front
    //4.back
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    //to delete
    q1.pop();
    q1.pop(); //always element at front is deleted.
    //basically element is not deleted ,it is replaced by 0.
    
    while(!q1.empty()){
        cout<<q1.front()<<endl;
        q1.pop();
    }

    cout<<"Element at front --> "<<q1.front()<<endl;
    cout<<"Element at back --> "<<q1.back()<<endl;
}