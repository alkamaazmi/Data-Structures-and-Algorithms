/*
 * Leetcode [350] Intersection of Two Arrays II
 * Given two integer arrays nums1 and nums2, return an array of their intersection
 * Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        for(int i: nums1){
              freq[i]++;    
        }
        vector<int> ans;
        for(int i:nums2){
            if(freq[i]>0){
                ans.push_back(i);
                freq[i]--;
            }
        }
        return ans;
    }
};

// Time Complexity:  O(M + N)
// Space Complexity: O(N)


