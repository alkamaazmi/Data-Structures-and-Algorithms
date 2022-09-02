/*
 * Leetcode [2220] Minimum Bit Flips to Convert Number
 * Given two integers start and goal, return the minimum number of bit flips to convert start to goal
 */

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int temp=start^goal;
        int ans=0;
        while(temp){
            ans+=temp&1;
            temp=temp>>1;
        }
        return ans;
    }
};
// Time Complexity: O(floor(log10(n) + 1)), where is n is max(start, goal)
// Space Complexity: O(1)
