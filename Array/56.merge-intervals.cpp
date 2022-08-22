/*
 * Leetcode [56] Merge Intervals
 * Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals
 * return an array of the non-overlapping intervals that cover all the intervals in the input
 */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(auto i: intervals){
            if(temp[1]>=i[0]){
                temp[1]=max(i[1],temp[1]);
            }else{
                ans.push_back(temp);
                temp=i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};

// Time complexity : O(nlogn)
// Space complexity : O(logn)


