/*
 * Leetcode [27] Remove Element
 * Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
 * the first k elements of nums should hold the final result
 * Return k after placing the final result in the first k slots of nums.
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 2 - pointer approach
         int j = 0;
        for(int i=0; i<nums.size(); i++){
            //As long as nums[i]!=val we copy nums[i] to nums[j] and increment j
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)

