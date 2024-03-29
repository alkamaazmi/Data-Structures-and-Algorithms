/*
 * Leetcode [260] Single Number III
 * Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice
 * Find the two elements that appear only once. You can return the answer in any order
 */

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xoR = 0,n = nums.size();
        for(int i = 0;i<n;i++) {
            xoR ^= nums[i];
        }
        
        int mask = 1;
        while(1) {
            if((mask & xoR) == 0) {
                mask = mask << 1;
            }
            else break;
        }
        
        int a = 0, b = 0;
        for(int i = 0;i<n;i++) {
            if(nums[i] & mask) a ^= nums[i];
            else b ^= nums[i];
        }
        return {a, b}; 
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         long long temp=0;
        for(auto i :nums){
               temp=temp^i;
        }
        int mask = temp^(temp&(temp-1));

        int a=0;
        for(auto i:nums){
            if(i&mask){
                a=a^i;
            }
        }
        int b=temp^a;
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};

