/*
 * Leetcode [34] Find First and Last Position of Element in Sorted Array
 * Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value
 * If target is not found in the array, return [-1, -1]
 */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        int first=-1,last=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(target==nums[mid]){
                first=mid;
                r=mid-1;
            }else if(target<nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        l=0,r=nums.size()-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(target==nums[mid]){
                last=mid;
                l=mid+1;
            }else if(target<nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};

// Time complexity: (log N)
// Space complexity: O(1)


