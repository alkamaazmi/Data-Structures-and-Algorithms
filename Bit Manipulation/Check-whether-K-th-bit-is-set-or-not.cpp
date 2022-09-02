/*
 * GeeksForGeeks : Check whether K-th bit is set or no
 * Given a number N and a bit number K, check if Kth bit of N is set or not
 * A bit is called set if it is 1
 * Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number
 * returns either true (if kth bit is set) or false(if kth bit is not set)
 */
class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
       return (n&(1<<k));
    }
};
// Time Complexity : O(1)
// Space Complexity : O(1)