/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int firstlargest=INT_MIN;
        int secondlargest=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>firstlargest){
                secondlargest=firstlargest;
                firstlargest=nums[i];
            }else if(nums[i]!=firstlargest&&nums[i]>secondlargest){
                secondlargest=nums[i];
            }
        }
        return firstlargest*secondlargest;
    }
};
// @lc code=end

