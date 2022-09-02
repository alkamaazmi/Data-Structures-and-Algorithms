/*
 * Leetcode [260] Single Number III
 * Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice
 * Find the two elements that appear only once. You can return the answer in any order
 */

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        int res=0;
        for(int i:nums){
            res^=i;
        }
        int mask=1;
        while((mask&res) == 0){
            mask=mask<<1;
        }
        int temp=0;
        for(int i:nums){
            if(mask&i){
                temp=temp^i;
            }
        }
        int a=res^temp;
        int b=res^a;
        ans.push_back(a);
        ans.push_back(b);
        
        return ans; 
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)



