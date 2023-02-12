/*
 * [485] Max Consecutive Ones
 * Given a binary array nums, return the maximum number of consecutive 1's in the array.
 */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                ans=max(count,ans);
            }else{
                count=0;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

