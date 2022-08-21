/*
 * Leetcode [128] Longest Consecutive Sequence
 * Given an unsorted array of integers nums
 * return the length of the longest consecutive elements sequence
 */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(),nums.end());
	    int longestStreak = 0;

        for (int num : num_set) {
            if (!num_set.count(num-1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (num_set.count(currentNum+1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                 longestStreak = max(longestStreak, currentStreak);
            }
         }

        return longestStreak;
    }
};

// Time complexity : O(n)
// Space complexity : O(n)



