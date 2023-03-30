/*
 * Write a program to print Binary representation of a given number N.
 */

class Solution
{
public:
    string getBinaryRep(int N)
    {
        string s="000000000000000000000000000000";
        
        int i=s.length()-1;
        while(N){
            int bit=N&1;
            s[i]=(bit)+'0';
            i--;
            N=N>>1;
        }
        return s;
    }
};