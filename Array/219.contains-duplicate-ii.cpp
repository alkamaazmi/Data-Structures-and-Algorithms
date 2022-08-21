/*
 * Leetcode [219] Contains Duplicate II
 * Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k
 */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if(mp.count(nums[i])){
                int diff = abs(mp[nums[i]] - i);
                if (diff <= k)return true;  
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
// Time complexity - O(N)
// Space complexity - O(N)

