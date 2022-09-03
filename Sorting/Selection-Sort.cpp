/*
 * Selection Sort
 * Given an unsorted array of size N, use selection sort to sort arr[] in increasing order
 */
class Solution{
    public:
    void selectionSort(int arr[], int n){
       for(int i=0;i<n-1;i++){
           int min_idx=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[min_idx]){
                   min_idx=j;
               } 
           }
           if(min_idx!=i){
                swap(arr[i],arr[min_idx]);
           }
       }
    }
};

// Time Complexity : O(N^2)
// Space Complexity : O(1)



