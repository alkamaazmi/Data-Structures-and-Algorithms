/*
 * Leetcode [912] Sort an Array
 * Given an array of integers nums, sort the array in ascending order
 */

class Solution {
public:
    void merge(vector<int> & nums,int left,int mid,int right){
    int a[right+1];
    int i = left;
    int j = mid+1;
    int k = left;
    while(i<=mid && j<=right){
        if(nums[i]<=nums[j]){
            a[k++] = nums[i++];
        }else{
            a[k++] = nums[j++];
        }
    }
   while(i<=mid){
       a[k++]=nums[i++];
       
   }
   while(j<=right){
       a[k++]=nums[j++];
   }
    
    for(int i=left;i<=right;i++){
        nums[i]=a[i];
    }
   }
    
    void mergeSort(vector<int>&nums,int left,int right){
    if(left<right){
        int mid = left+(right-left)/2;
        mergeSort(nums,left,mid);
        mergeSort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
    }
    vector<int> sortArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
    
        mergeSort(nums,left,right);
    
         return nums;
    }
};


