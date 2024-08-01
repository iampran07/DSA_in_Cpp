#include<iostream>
using namespace std;

//basic structure
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next1=next;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

int main() {
    Node head= Node(10);
    cout<<head.data;
    return 0;
}