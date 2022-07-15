/*
 * Leetcode [217] Contains Duplicate
 * Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

         unordered_set<int> s(nums.begin(),nums.end());

          //If the size of set is equal to size of nums, then we'll return false
          //If the size of set is not equal to size of nums, then we'll return true
          return s.size()!=nums.size();
    }
};

// Time Complexity:- O(n)
// Space Complexity :- O(n)
