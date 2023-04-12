/*
 * GFG : Min Subsets with Consecutive Numbers
 * Given an array of distinct positive numbers, the task is to calculate the minimum number of subsets (or subsequences) from the array such that each subset contains consecutive numbers.
 */

class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        sort(arr,arr+n);
        int ans=1;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]!=1){
                ans++;
            }
        }
        return ans;
    }
};

// Time Complexity : O(nlogn)
// Space Complexity : O(n)