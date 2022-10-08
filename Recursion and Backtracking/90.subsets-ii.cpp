/*
 * [90] Subsets II
 * Given an integer array nums that may contain duplicates, return all possible subsets (the power set)
 * The solution set must not contain duplicate subsets. Return the solution in any order
 */

class Solution
{
public:
    void findSubSet(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> ds)
    {
        ans.push_back(ds);
        for (int i = ind; i < arr.size(); i++)
        {
            if (i != ind && arr[i] == arr[i - 1])
            {
                continue;
            }
            ds.push_back(arr[i]);
            findSubSet(i + 1, arr, ans, ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findSubSet(0, nums, ans, ds);
        return ans;
    }
};

