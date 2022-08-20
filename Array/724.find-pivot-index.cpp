/*
 * Leetcode [724] Find Pivot Index
 * Given an array of integers nums, calculate the pivot index of this array
 * The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right
 * If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array
 * Return the leftmost pivot index. If no such index exists, return -1
 */

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int index=-1;
        int sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            int rightsum=sum-nums[i]-leftsum;
            if(rightsum==leftsum){
                index=i;
                break;
            }else{
                leftsum+=nums[i];
            }
        }
        return index;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)


