/*
 * Leetcode [283] Move Zeroes
 * Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

            int j = 0;
            int n=nums.size() ;

            for (int i = 0; i < n; i++) {
                
                if (nums[i] != 0) {
                    swap(nums[j], nums[i]);
                     j++;
                }
            }
    }
};

// Time Complexity = O(N)
// Space Complexity = O(1)

