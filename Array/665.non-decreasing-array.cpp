/*
 * Leetcode [665] Non-decreasing Array
 * Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one element.
 */

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {

        int cnt = 0; 

        for(int i = 1; i < nums.size(); i++){

            if(nums[i] < nums[i-1]){

                if(++cnt > 1) {
                    return false;
                }
                else if(i == 1 || nums[i-2] <= nums[i]){
                    nums[i-1] = nums[i]; 
                }    
                else{
                    nums[i] = nums[i-1];
                } 
            }
        }
        return true;
    }
};
// Time Complexity: O(N) 
// Space Complexity: O(1)

