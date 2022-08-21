/*
 * Leetcode [153] Find Minimum in Rotated Sorted Array
 * Suppose an array of length n sorted in ascending order is rotated between 1 and n times
 * Given the sorted rotated array nums of unique elements, return the minimum element of this array
 */

class Solution {
public:
    int findMin(vector<int>& nums) {

        // If the list has just one element then return that element
        if(nums.size()==1){
            return nums[0];
        }
        int left=0,right=nums.size()-1;
         // if the last element is greater than the first element 
         //then there is no rotation
        if(nums[left]<nums[right]){
            return nums[0];
        }
        left=1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<nums[mid-1]){
                return nums[mid];
            }else if(nums[mid]<nums[0]){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return INT_MIN;
    }
};

// Time Complexity : Same as Binary Search O(logN)
// Space Complexity : O(1)
