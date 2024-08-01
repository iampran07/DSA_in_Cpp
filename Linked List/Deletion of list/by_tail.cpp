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


Node* deletetail(Node* head){
    if(head==NULL) return NULL;
    if(head->next==nullptr) return NULL;

    Node* temp=head;

    while((temp->next)->next!=nullptr){
        temp=temp->next;
    }
    temp->next=nullptr;
    delete temp->next;
    return head;
}

int main() {
    int arr[5]={2,5,9,10,89};
    Node* ans=convertToLL(arr);
    Node* head=deletetail(ans);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}