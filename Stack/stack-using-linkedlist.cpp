/*
 * Implement a stack using singly linked list
*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class stack{
    
    Node *head;

    public:
     
    stack(){
        head=NULL;
    }

    void push(int val){
        Node *newnode=new Node(val);
        if (!newnode) {
            cout<<"stack overflow"<<endl;
        }else{
            newnode->data=val;
            newnode->next=head;
            head=newnode; 
        }
        
    }

    void peek(){
        if(head==NULL){
            cout<<"stack underflow";
        }else{
            cout<<head->data<<endl;
        }
    }

    void pop(){
        if(head==NULL){
            cout<<"stack underflow";
        }else{
            Node *temp=head;
            head=head->next;
            cout<<temp->data<<endl;
            delete temp;
        }
    }
};

int main(){
    stack s;
    s.push(12);
    s.push(13);
    s.pop();
    s.peek();
    return 0;
}