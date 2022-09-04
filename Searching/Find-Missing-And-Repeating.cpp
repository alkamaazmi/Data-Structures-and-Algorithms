/*
 * GeeksForGeeks : Find Missing And Repeating
 * Given an unsorted array Arr of size N of positive integers
 * One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers
 */

class Solution{
public:
    int *findTwoElement(int *arr, int n){
        int repeating,missing;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0){
                repeating=abs(arr[i]);
             
            }else{
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing=i+1;
            }
        }
        int *ans;
        ans[0]=(int)repeating;
        ans[1]=(int)missing;
        
        return ans;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)