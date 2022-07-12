/*
 * leetcode [1512] Number of Good Pairs
 * Given an array of integers nums, return the number of good pairs.
 * A pair (i, j) is called good if nums[i] == nums[j] and i < j.
 */

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

         // map to store frequencies of each element
        unordered_map<int, int> count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }

        int ans=0;
        for(auto i:count)
        {   
            if(i.second>1)
            {
                int n=i.second;
                // if a item has frequency n then (n*(n-1))/2 pairs are generated.
                 ans+=(n * (n-1))/2;
            }
        }
        
        return ans;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)


