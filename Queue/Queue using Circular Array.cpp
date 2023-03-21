/*
 * Implementation of Queue using  Circular Array 
*/

#include<iostream>
using namespace std;

class Queue{
    int front,rear,size;
    int *arr;

    public:

    Queue(int n){
        front = -1;
        rear = -1;
        size = n;
        arr = new int[size];
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if((rear+1)%size==front){
            return true;
        }else{
            return false;
        }
    }

    void enQueue(int element){
        if(isFull()){
            cout<<"Queue is full "<<endl;
        }else{
            if(front==-1) {
                front=0;
            }
            rear=(rear+1)%size;
            arr[rear]=element;
            cout<<endl<<"Inserted "<<element<<endl;
        }
    }

    int deQueue(){
        if(isEmpty()) {
            cout<<endl<<"Empty Queue"<<endl;
            return(-1);
        }else{
            int element=arr[front];
            arr[front]=-1;
            if(front==rear){
                front=-1;
                rear=-1;
            } /* Q has only one element, so we reset the queue after deleting it. */
            else{
                front=(front+1)%size;
            }

            return element;
        }
    }

};
int main(){
    Queue *q=new Queue(5);
    q->enQueue(12);
    q->enQueue(13);
    q->enQueue(11);
    q->enQueue(15);
    q->enQueue(14);
    q->enQueue(20);
    q->deQueue();
    q->deQueue();
    q->deQueue();
    cout<<q->deQueue()<<endl;
}