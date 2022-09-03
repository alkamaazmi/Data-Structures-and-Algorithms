/*
 * GeeksForGeeks : Copy Set Bits in Range
 * Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32. Find the set bits of y in range [l, r] and set these bits in x also
 * return the modified value of x
 */

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
       long long temp=1L<<(r-l+1);
        temp=temp-1;
        temp=temp<<(l-1);
        temp=y&temp;
        return  (int)x|temp;
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)