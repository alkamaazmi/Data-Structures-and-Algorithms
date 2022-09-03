/*
 * Bubble Sort
 * Given an Integer N and a list arr. Sort the array using bubble sort algorithm
 */


class Solution{
    public:
    void bubbleSort(int arr[], int n){
        for(int i=0;i<n-1;i++){
            int flag=0;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0){
                break;
            }
        }
    }
};

// Time Complexity : O(N^2)
// Space Complexity : O(1)