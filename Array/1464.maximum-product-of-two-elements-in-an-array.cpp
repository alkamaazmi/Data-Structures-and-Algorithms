/*
 * leetcode [1464] Maximum Product of Two Elements in an Array
 * you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 */

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;//largest number
        int flag = 0;
        for(int i = 0;i<nums.size();i++){
            if(max1 < nums[i]){
                max1 = nums[i];
                flag = i;
            }
        }
        int max2=  INT_MIN;//second largest number
        for(int i = 0;i< nums.size();i++){
            //equality holds as max1 = max2 can be possible
            if(nums[i] > max2 && i != flag)
            {
                 max2 = nums[i];
            } 
        }
        
        return (max2 - 1) * (max1 - 1);
    }
};
//Time Complexity: O(N)
//Space Complexity: O(1)
