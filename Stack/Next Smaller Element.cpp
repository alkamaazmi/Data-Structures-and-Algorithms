/*
 * Next Smaller Element
 * The NSE for an element x is the first smaller element on the right side of x in the array. 
 * Elements for which no smaller element exist (on the right side), consider NSE as -1. 
 */
class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            while(st.top()>=curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(curr);
        }
        return ans;
    } 
};