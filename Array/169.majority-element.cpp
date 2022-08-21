/*
 * Leetcode [169] Majority Element
 * Given an array nums of size n, return the majority element
 * The majority element is the element that appears more than ⌊n / 2⌋ times
 * You may assume that the majority element always exists in the array
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =0;
        int ele;
        for(int i:nums){
            if(cnt==0){
                ele=i;
                cnt=1;
            }else if(ele==i){
                cnt++;
            }else{
                cnt--;
            }
        }
        return ele;
    }
};
// Boyer-Moore Voting Algorithm
// Time complexity : O(n)
// Space complexity : O(1)


