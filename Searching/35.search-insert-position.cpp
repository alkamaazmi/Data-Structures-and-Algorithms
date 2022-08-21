/*
 * Leetcode [35] Search Insert Position
 * Given a sorted array of distinct integers and a target value, return the index if the target is found
 * If not, return the index where it would be if it were inserted in order
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};

// Time complexity: (logN)
// Space complexity: O(1)

