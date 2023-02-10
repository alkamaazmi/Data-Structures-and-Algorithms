/*
 * [41] First Missing Positive
 * Given an unsorted integer array nums, return the smallest missing positive integer.
 */

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]<=n ){
                int ind=nums[i]-1;
                if(nums[ind]!=nums[i]){
                 swap(nums[ind],nums[i]);
                 i--;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]){
                return i+1;
            }
        }
        return n+1;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)


/*******************************************************/



class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int n=nums.size();
        int i=1;
        for(;i<=n;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return i;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n)