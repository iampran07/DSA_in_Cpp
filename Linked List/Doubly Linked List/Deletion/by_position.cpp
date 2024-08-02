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

Node* deletePosition(Node* head,int position){
    if(head==NULL || head->next==nullptr){
        return NULL;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=nullptr;
        head->prev=nullptr;
        delete temp;
        return head;
    }
    
    int count=0;
    Node* temp=head;
    Node* back=NULL;

    while(temp){
        count++;
        if(count==position){
            back->next=temp->next;
            temp->next->prev=back->next;
            temp->next=nullptr;
            temp->prev=nullptr;
            delete temp;
            break;
        }
        back=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    int arr[5]={2,10,30,60,90};
    Node* head=convert2DLL(arr);
    head=deletePosition(head,1);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}