/*
 * [238] Product of Array Except Self
 * Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
 * The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 * You must write an algorithm that runs in O(n) time and without using the division operation.
 * 2 <= nums.length <= 10^5
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> suff;
        int prod=1;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            suff.push_back(prod);
        }
        reverse(suff.begin(),suff.end());
        prod=1;
        for(int i=0;i<n;i++){
            if(i==0){
                suff[i]=suff[i+1];
                prod*=nums[i];
            }else if(i+1<n){
                suff[i]=prod*suff[i+1];
                prod*=nums[i];
            }else{
                suff[i]=prod;
            }
        }
        return suff;  
    }
};

//Time complexity is O(n)
//space comlexity is O(1)




