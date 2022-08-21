/*
 * Leetcode [349] Intersection of Two Arrays
 * Given two integer arrays nums1 and nums2, return an array of their intersection
 * Each element in the result must be unique and you may return the result in any order
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};

// Time Complexity = O(N)
// Space Complexity = O(N)