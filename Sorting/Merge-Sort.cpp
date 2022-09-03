/*
 * Merge Sort
 * Given an array arr[], its starting position l and its ending position r
 * Sort the array using merge sort algorithm
 */

class Solution{
    public:
    void merge(int arr[], int l, int m, int r){
        int temp[r+1];
        int i=l;
        int j=m+1;
        int k=l;
        while(i<=m and j<=r){
            if(arr[i]<arr[j]){
                temp[k++]=arr[i++];
            }else{
                temp[k++]=arr[j++];
            }
        }
        while(i<=m){
            temp[k++]=arr[i++];
        }
        while(j<=r){
            temp[k++]=arr[j++];
        }
        for(i=l;i<=r;i++){
            arr[i]=temp[i];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int m=l+(r-l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};

// Time Complexity: O(nlogn) 
// Space Complexity: O(n)