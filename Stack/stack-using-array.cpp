#include<iostream>
#include<string>
using namespace std;

class stack{
    int capacity;
    int size;
    int *arr;
    public:
         //constructor
        stack(int capacity){
            this->capacity=capacity;
            arr=new int[capacity];
            size=-1;
        }

        void top(){
            if(size==-1){
                cout<<"stack underflow"<<endl; 
            }else{
                int data=arr[size];
                cout<<data<<endl;
            }
        }

        void pop(){
            if(size==-1){
                cout<<"stack underflow"<<endl; 
            }else{
                int data=arr[size];
                size--;
                cout<<data<<endl;
            }
        }
        void push(int val){
            if(size+1==capacity){
                cout<<"stack overflow"<<endl;
            }else{
                size++;
                arr[size]=val;
            }
        }
         
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int capacity;
        cin>>capacity;
        stack s1(capacity);
        while(n--){
           string str;
           cin>>str;
           if(str=="top"){
               s1.top();
           }
           else if(str=="pop"){
               s1.pop();
           }else{
               int val;
               cin>>val;
               s1.push(val);
           }
        }
    }
    return 0;
}