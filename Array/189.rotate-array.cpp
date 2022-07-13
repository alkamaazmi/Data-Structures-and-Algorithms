/* 
* Leetcode 189.rotare-array
* rotate the array right by k steps
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k=k%nums.size();

        //reverse first n-k elements
        reverse(nums, 0,nums.size()-k-1);

        //reverse last k elements
        reverse(nums, nums.size()-k ,nums.size()-1);

        //reverse the whole array 
        reverse(nums,0,nums.size()-1);
    }
    //function to reverse an array
    void reverse(vector<int>& nums, int low, int high)
    {
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
};
//Time complexity is O(n)
//space comlexity is O(1)
