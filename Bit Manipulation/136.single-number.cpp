/*
 * Leetcode [136] Single Number
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
	    for(auto x:nums){
            ans^=x; 
        }
	     
	   return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)


