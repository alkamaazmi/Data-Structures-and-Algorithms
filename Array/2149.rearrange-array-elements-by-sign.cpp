/*
 * Leetcode [2149] Rearrange Array Elements by Sign
 * You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers
 * You should rearrange the elements of nums such that the modified array follows the given conditions:
    Every consecutive pair of integers have opposite signs.
    For all integers with the same sign, the order in which they were present in nums is preserved.
    The rearranged array begins with a positive integer.
 * Return the modified array after rearranging the elements to satisfy the aforementioned conditions
 */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int indexpos = 0, indexneg=1;
        for(auto num: nums){
            if(num>0){
                ans[indexpos] = num;
                indexpos+=2;
            }
            if(num<0){
                ans[indexneg] = num;
                indexneg += 2;
            }
        }
        return ans;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
// Notice that extra array is part of algorithm.

