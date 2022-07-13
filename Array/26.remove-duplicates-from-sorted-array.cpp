/*
 * Leetcode [26.] Remove Duplicates from Sorted Array
 */


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j=0,i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[j]=nums[i];
                j++;
            }
        }
        nums[j]=nums[i];
        j=j+1;
        return j;
    }
};
//Two pointer Approach
//Time Complexity - O(N)
//Space Complexity - O(1)

