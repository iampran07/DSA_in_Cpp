#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertLL(int arr[]){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=1;i<5;i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* deleteValue(Node* head,int val){
    if(head==NULL) return NULL;
    if(head->next==nullptr) return NULL;

    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        if(temp->data==val){
           prev->next= (prev->next)->next;
           delete temp;
           break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}


int main(){
    int arr[5]={2,5,9,10,89};
    Node* head=convertLL(arr);
    Node* ans=deleteValue(head,10);
    Node* temp=ans;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}