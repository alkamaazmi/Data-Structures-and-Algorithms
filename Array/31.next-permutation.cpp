/*
 * Leetcode [31] Next Permutation
 * A permutation of an array of integers is an arrangement of its members into a sequence or linear order
 * The next permutation of an array of integers is the next lexicographically greater permutation of its integer
 * Given an array of integers nums, find the next permutation of nums
 */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
        for(k=n-2; k>=0; k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(l=n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin()+k+1, nums.end());
    }
};

// Time complexity : O(n)
// Space complexity : O(1)

