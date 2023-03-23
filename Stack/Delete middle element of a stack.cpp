/*
 * Delete middle element of a stack
*  Given a stack with push(), pop(), empty() operations, delete the middle of the stack without using any additional data structure.
Middle: ceil((size_of_stack+1)/2) (1-based index)
*/

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void helper(stack<int>&st, int i,int mid)
    {
        if(st.empty())
            return;
        if(i==mid)
        {
            st.pop();
            return;
        }
        int temp=st.top();
        st.pop();
        helper(st,i+1,mid);
        st.push(temp);

    }
    
    
    
    
    void deleteMid(stack<int>&s, int n)
    {
        int mid=ceil((n+1)/2.0);
        helper(s,1,mid);
    }
};
// Time Complexity: O(N)
// Space Complexity: O(N)