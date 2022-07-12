/*
 * leetcode [1] Two Sum
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
        vector<int> v;
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
           int a=target-nums[i];
            if(m.find(a)!=m.end()){
                v.push_back(i);
                v.push_back(m[a]);
            }else{
                m[nums[i]]=i;
            }
        }
        return v;
    }
};

//Time Complexity:O(n)
//Space Complexity:O(n)


