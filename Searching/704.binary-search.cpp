/*
 * [704] Binary Search
 * Given an array of integers nums which is sorted in ascending order, and an integer target
 * write a function to search target in nums
 * If target exists, then return its index. Otherwise, return -1
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
         while(low<=high){
             int mid=low+(high-low)/2;
             if(nums[mid]==target){
                 return mid;
             }else if(target>nums[mid]){
                 low=mid+1;
             }else{
                 high=mid-1;
             }
         }
        return -1;
    }
};

// Time complexity: (log N)
// Space complexity: O(1)

