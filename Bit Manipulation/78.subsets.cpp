/*
 * Leetcode [78] Subsets
 * Given an integer array nums of unique elements, return all possible subsets (the power set)
 * The solution set must not contain duplicate subsets. Return the solution in any order
 */

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size(); 
        int subset=(1<<n);  // 2^n Number of subset
        
        for(int i=0;i<subset;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){ //Checking for set bits in number i
                    temp.push_back(nums[j]); // Push the value which is at founded index of setbit
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

Time complexity: O(n*(2^n))
Space complexity: O(n*(2^n))


