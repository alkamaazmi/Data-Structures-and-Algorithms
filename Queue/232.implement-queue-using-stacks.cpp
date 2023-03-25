/*
 * [232] Implement Queue using Stacks
 */

class MyQueue {
public:

    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.empty()){
            s1.push(x);
            return;
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }

        }
    }
    
    int pop() {
        int x=s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.empty() and s2.empty()){
            return true;
        }else{
            return false;
        }
    }
};


