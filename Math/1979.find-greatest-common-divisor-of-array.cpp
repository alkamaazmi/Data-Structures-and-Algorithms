/*
 * leetcode [1979] Find Greatest Common Divisor of Array
 * Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums
 */

class Solution {
public:
    static int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int mx=nums[0];
        int mn=nums[0];
        for(int i=1;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        int ans=gcd(mn,mx);
        return ans;
    }
};


