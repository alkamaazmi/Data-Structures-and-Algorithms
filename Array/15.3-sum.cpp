/*
 * Leetcode [15] 3Sum
 * Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0
 */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res; 
        sort(nums.begin(), nums.end()); 
        
        // moves for a
        for (int i = 0; i < (int)(nums.size())-2; i++) {
            
            if (i == 0 || (i > 0 && nums[i] != nums[i-1])) {
                
                int lo = i+1, hi = (int)(nums.size())-1, sum = 0 - nums[i];
                
                while (lo < hi) {
                    if (nums[lo] + nums[hi] == sum) {
                        
                        vector<int> temp; 
                        temp.push_back(nums[i]); 
                        temp.push_back(nums[lo]); 
                        temp.push_back(nums[hi]); 
                        res.push_back(temp);
                        do{
                            lo++;
                        } while (lo < hi && nums[lo] == nums[lo-1]);
                        do{
                            hi--;
                        }
                        while (lo < hi && nums[hi] == nums[hi+1]);
                     
                    } 
                    else if (nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        return res; 
    }
};

// Time complexity: O(N^2)
// Space Complexity: O(1)


