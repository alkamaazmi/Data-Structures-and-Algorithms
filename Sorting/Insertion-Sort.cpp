/*
 * Insertion Sort
 * Given an unsorted array of size n, use Insertion sort to sort arr[] in increasing order
 */

class Solution{
    public:
    void insertionSort(int arr[], int n){
       for(int i=1;i<n;i++){
           int key=arr[i];
           int j=i-1;
           while(j>=0 and arr[j]>key){
               arr[j+1]=arr[j];
               j--;
            }
           arr[j+1]=key;
       }
    }
};

// Time Complexity : O(N^2)
// Space Complexity : O(1)







