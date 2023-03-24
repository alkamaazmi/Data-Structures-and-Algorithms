/*
 * Redundant Brackets
 * Given a string A denoting an expression. It contains the following operators '+', '-', '*', '/'.
 * A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets.
 * Chech whether A has redundant braces or not.
 * A will be always a valid expression.
 */

bool findRedundantBrackets(string &s)
{    
    int n=s.length();
    stack<char> st;
    for( int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            st.push(s[i]);
        }else if(s[i]==')'){
            if(st.top()=='('){
                return true;
            }
            else{
                while(st.top()!='('){
                    st.pop();
                }
                st.pop();
            }
        }else{
            continue;
        }
    }
    return false;
}
