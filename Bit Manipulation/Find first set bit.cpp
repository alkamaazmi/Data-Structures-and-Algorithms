/*
 * Given an integer N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
 */

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        
        if(n&1){
            return 1;
        }
        unsigned int  ans=1;
        n=n^(n&(n-1));
        while(n){
            if(n&1){
                return ans;
            }
            ans++;
            n=n>>1;
        }
        return 0;
        
    }
};