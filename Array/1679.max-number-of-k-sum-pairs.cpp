/*
 * leetcode [1679] Max Number of K-Sum Pairs
 * In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.
 * Return the maximum number of operations you can perform on the array.
 */

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freqMap;
        int ans = 0;
        
        for(int i = 0 ; i < n ; i++){
            
            if(freqMap[k - nums[i]] > 0){
                ans++;
                freqMap[k-nums[i]]--;
            }else{
                freqMap[nums[i]]++;
            }
            
        }
        
        return ans;
    }
};

//Time Complexity:O(n)
//Space Complexity:O(n)

