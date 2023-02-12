/*
 * [448] Find All Numbers Disappeared in an Array
 * Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
 */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ind=nums[i]-1;
            if(nums[i]!=nums[ind]){
                swap(nums[i],nums[ind]);
                i--;
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
             if(nums[i]!=i+1){
                 ans.push_back(i+1);
             }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
