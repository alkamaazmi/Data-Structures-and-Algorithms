/*
 * [628] Maximum Product of Three Numbers
 * Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
    * 3 <= nums.length <= 10^4
    * -1000 <= nums[i] <= 1000
 */

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n1,n2,n3;
        n1=INT_MIN;
        n2=INT_MIN;
        n3=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;
        int n=nums.size();

        //three largest values
        for(int i=0;i<n;i++){
            if(nums[i]>n1){
                n3=n2;
                n2=n1;
                n1=nums[i];
            }else if(nums[i]>n2){
                 n3=n2;
                 n2=nums[i];
            }else if(nums[i]>n3){
                n3=nums[i];
            }
        }
        //two smallest values
        for(int i=0;i<n;i++){
             if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }else if(nums[i]<min2){
                min2=nums[i];
            }
            
        }
        int ans1=n1*n2*n3;
        int ans2=min1*min2*n1;
        return max(ans1,ans2);
    }
};

//Time complexity : O(n)
//Space complexity : O(1)



