/*leetcode 53.Maximum Subarray
find the contiguous subarray (containing at least one number) which has the largest sum 
*/
//Solution using  Kadane Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};
//Time Complexity is O(n)
//Space Complexity is O(1)
