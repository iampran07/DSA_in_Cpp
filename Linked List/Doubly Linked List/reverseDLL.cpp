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
        next=next1;
        prev=prev1;
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

Node* reverseDLL(Node* head){
    Node* current=head;
    Node* last=NULL;

    while(current){
        last=current->prev;
        current->prev=current->next;
        current->next=last;
        current=current->prev;
    }

    return last->prev;
}

int main(){
    int arr[5]={2,10,30,60,90};
    Node* head=convert2DLL(arr);
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    head=reverseDLL(head);
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}