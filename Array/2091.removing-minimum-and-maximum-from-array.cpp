/*
 * Leetcode [2091] Removing Minimum and Maximum From Array
 * Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.
 * A deletion is defined as either removing an element from the front of the array or removing an element from the back of the array.
 */

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int mn=0,mx=0;
        int n=nums.size();

        for(int i=1;i<n;i++){
            if(nums[i]<nums[mn]){
                  mn =i;
                 }
            if(nums[i]>nums[mx]){
                   mx=i;
            }
        }
        int i=min(mn,mx);
        int j=max(mn,mx);

        //remove both from left
        int ans1=j+1;

        //remove both from right
        int ans2=n-i;

        //remove one from left one from right
        int ans3=(i+1)+(n-j);
        
        int result=min(ans1,min(ans2,ans3));
         
        return result;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)


