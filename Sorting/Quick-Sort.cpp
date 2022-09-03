/*
 * Quick Sort
 * Given an array arr[], its starting position low and its ending position high
 * Sort the array using Quick sort algorithm
 */

class Solution{
    public:
    
    void quickSort(int arr[], int low, int high){
       if(low<high){
           int pivot=partition(arr,low,high);
           quickSort(arr,low,pivot-1);
           quickSort(arr,pivot+1,high);
        }
    }

    int partition (int arr[], int low, int high){
       int pivot=arr[high];
       int i=low-1;
       for(int j=low;j<=high-1;j++){
           if(arr[j]<pivot){
               i++;
               swap(arr[i],arr[j]);
            }
        }
       swap(arr[i+1],arr[high]);
       return i+1;
    }
};

// Time Complexity: O(N*logN)
// Space Complexity: O(1)





