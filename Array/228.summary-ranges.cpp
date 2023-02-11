/*
 * [228] Summary Ranges
 * You are given a sorted unique integer array nums.
 * A range [a,b] is the set of all integers from a to b (inclusive).
 * Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
 * Each range [a,b] in the list should be output as:
     "a->b" if a != b
     "a" if a == b
 */

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i;
            string temp="";
            while(j+1<n && nums[j]+1==nums[j+1]){
                j++;
            }
            if(i!=j){
              temp=to_string(nums[i])+"->"+to_string(nums[j]);
              ans.push_back(temp);
            }else{
                temp=to_string(nums[i]);
                ans.push_back(temp);
            }
            i=j;
        }
        return ans;
    }
};

//Time Complexity - O(N)
//Space Complexity - O(1)





