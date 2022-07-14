/*
 * Leetcode [75] Sort Colors
 * Given an array nums with n objects colored red, white, or blue, sort them in-place.
 * We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
         int n1=0,n2=0,n0=0;

         //Iterate the array counting number of 0's, 1's, and 2's.
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                n0++;
            }
            else if(nums[i]==1){
                n1++;
            }
            else{
                n2++;
            }
        }

        //Overwrite array with the total number of 0's, then 1's and followed by 2's.
        int i=0;
        while(n0>0){
            nums[i]=0;
            i++;
            n0--;
        }
        while(n1>0){
            nums[i]=1;
            i++;
            n1--;
        }
        while(n2>0){
            nums[i]=2;
            i++;
            n2--;
        }
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
