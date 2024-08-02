#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next1=next;
        prev1=prev;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

Node* convert2DLL(int arr[]){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<5;i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

int main(){
    int arr[5]={2,10,30,60,90};
    Node* head=convert2DLL(arr);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}