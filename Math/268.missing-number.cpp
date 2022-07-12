/*
 * leetcode [268] Missing Number
 * Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int sum = 0; // sum of all numbers initially 0
        
        int total = nums.size()*(nums.size() + 1)/2; // total is the sum of all numbers in the range [0,n]
        
        // iterate through the array
        for (auto number : nums) { 
            sum += number; // add the number to the sum
        }

        return total - sum; // return the difference between the sum and the total that is the missing number
    }
};
// Time Complexity: O(N)
// Space Complexity : O(1)

