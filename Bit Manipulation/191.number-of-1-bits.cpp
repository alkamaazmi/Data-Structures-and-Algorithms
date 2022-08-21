/*
 * Leetcode [191] Number of 1 Bits
 * Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight
 */

class Solution {
public:
    int hammingWeight(uint32_t n) {
       int ans=0;
        while(n>0){
                ans+=n&1;
                n>>=1;
        }
        return ans;
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)

