/*
 * [921] Minimum Add to Make Parentheses Valid
 */

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int cost=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(st.empty()){
                    cost++;
                }else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            cost++;
            st.pop();
        }
        return cost;  
    }
};


