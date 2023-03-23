/*
 * You are given a stack St. You have to reverse the stack using recursion.
 */

class Solution{
public:
    
    
    void insertAtBottom(stack<int> &St,int x){
        if(St.empty()){
            St.push(x);
            return;
        }
        int num=St.top();
        St.pop();
        insertAtBottom(St,x);
        St.push(num);
    }


    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        int num=St.top();
        St.pop();
        Reverse(St);
        
        insertAtBottom(St,num);
    }
};

