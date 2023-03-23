/*
 * [20] Valid Parentheses
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 */

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty())
                {
                    if (s[i] == ')' and st.top() != '(')
                    {
                        return false;
                    }
                    else if (s[i] == ']' and st.top() != '[')
                    {
                        return false;
                    }
                    else if (s[i] == '}' and st.top() != '{')
                    {
                        return false;
                    }
                    else
                    {
                        st.pop();
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty() ? true : false;
    }
};

//Time Complexity:O(n)
//Space Complexity:O(n)