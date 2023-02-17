#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};


//Traversing the Linked List
void print(Node* &head){

    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}//Time Complexity:O(n), Space Complexity:O(1)


//Inserting a Node in Singly Linked List at the Beginning
void insertAtHead(Node* &head,int data){
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;

}//Time Complexity:O(1), Space Complexity:O(1)


//Inserting a Node in Singly Linked List at the Ending
void insertAtEnd(Node* &head,int data){
    Node* node=new Node(data);
    if(head==NULL){
        head=node;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;

}//Time Complexity:O(n), Space Complexity:O(1)


//Insert a node at a specific position in a linked list
void insertAtPosition(Node* &head,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    int k=1;
    Node* temp=head;
    while(temp->next!=NULL && k<position-1){
        temp=temp->next;
        k++;
    }
    Node* node=new Node(data);
    node->next=temp->next;
    temp->next=node;
}//Time Complexity:O(n), Space Complexity:O(1)


//Deleting the first node
void deleteFirstNode(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}//Time Complexity:O(1), Space Complexity:O(1)


//Deleting the Last Node in Singly Linked List
void deleteLastNode(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        return;
    }
    Node* prev=NULL,*curr=head;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    delete curr;
}//Time Complexity:O(n), Space Complexity:O(1)


//deleting a node at a specific position in a linked list
void deleteAtPosition(Node* &head,int position){
    if(head==NULL){
        return;
    }
    if(position==1 || head->next==NULL){
       Node* temp=head;
       head=head->next;
       delete temp;
       return;
    }else{
      int i=1;
    Node *prev=NULL,*curr=head;
    while(curr->next!=NULL&&i<position){
        prev=curr;
        curr=curr->next;
        i++;
    }
    prev->next=curr->next;
    delete curr;
    }
   
}//Time Complexity:O(n), Space Complexity:O(1)


//Deleting Singly Linked List
void deletelist(Node* &head){
    Node *temp=head;
    while(head!=NULL){
        temp=head;
        head=head->next;
        delete temp;
    }
}//Time Complexity:O(n), Space Complexity:O(1)



int main(){
    Node* head=NULL;
    insertAtHead(head,12);
    insertAtHead(head,15);
    insertAtEnd(head,1243);
    insertAtPosition(head,3,123);
    deleteAtPosition(head,1);
    deletelist(head);
    print(head);
    return 0;
}