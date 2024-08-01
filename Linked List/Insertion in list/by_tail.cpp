#include<iostream>
using namespace std;

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

Node* convertToLL(int arr[]){
     Node* head=new Node(arr[0]);
     Node* mover=head;
    for(int i=1;i<5;i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}


Node* insertTail(Node* head, int val){
   if(head==NULL){
    head->data=val;
    head->next=nullptr;
    return head;
   }

   Node* temp=head;
   while(temp->next!=nullptr){
    temp=temp->next;
   }

   Node* insert=new Node(val);
   temp->next=insert;
   return head;
}

int main() {
    int arr[5]={2,5,9,10,89};
    Node* ans=convertToLL(arr);
    Node* head=insertTail(ans, 100);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}