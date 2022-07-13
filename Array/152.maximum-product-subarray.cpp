/*
* Leetcode [152] Maximum Product Subarray
* find a contiguous non-empty subarray within the array that has the largest product, and return the product.
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // base case
         if(nums.empty()){
            return 0;
        }
        
        // maintain two variables to store the maximum and minimum product ending at the current index
        int max_ending=nums[0],min_ending=nums[0];
        
        // to store the maximum product subarray found so far
        int max_so_far =nums[0];

        // traverse the given array
        for(int i=1;i<nums.size();i++){

            int temp= max_ending;

            // update the maximum product ending at the current index
             max_ending=max(nums[i],max(max_ending*nums[i],min_ending*nums[i]));
             
            // update the minimum product ending at the current index
             min_ending=min(nums[i],min(temp*nums[i],min_ending*nums[i]));
            
            //update the Maximum Product Subarray so far
             max_so_far=max(max_so_far,max_ending);   
        }

        // return maximum product
        return  max_so_far;
    }
};
//Time Complexity: O(N)
//Space Complexity: O(1)

