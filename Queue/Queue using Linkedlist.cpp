/*
 * Implementation of Queue using Linked List 
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

class Queue{

    Node *front,*rear;

    public:
    
    Queue(){
        front=NULL;
        rear=NULL;
    }
    
    void enQueue(int val){
        Node *newnode=new Node(val);
        if(front==NULL){ //empty queue
            front=rear=newnode;
            return;
        }
        rear->next=newnode;
        rear=newnode;

    }

    int deQueue(){
        if(front==NULL){
            cout<<endl<<"Empty Queue"<<endl;
            return -1;
        }
        Node *temp=front;
        int ans=front->data;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete temp;
        return ans;
    }
};

int main(){
    Queue *q=new Queue();
    q->enQueue(12);
    q->enQueue(13);
    q->enQueue(14);
    q->deQueue();
    q->deQueue();

   cout<< q->deQueue();
}