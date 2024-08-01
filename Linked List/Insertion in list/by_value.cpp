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


Node* insertPosition(Node* head, int position, int value){
  
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        if(temp->data==position){
            Node* result=new Node(value);
            prev->next=result;
            result->next=temp;
            break;
        }else{
        prev=temp;
        temp=temp->next;
    }
    }
    return head;
}

int main() {
    int arr[5]={2,5,9,50,89};
    Node* ans=convertToLL(arr);
    Node* head=insertPosition(ans,9,7);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}