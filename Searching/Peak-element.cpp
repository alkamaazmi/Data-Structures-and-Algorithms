/*
 * GeeksForGeeks : Peak Element
 * An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists)
 * Given an array arr[] of size N, Return the index of any one of its peak elements
 */
class Solution{
    public:
    int peakElement(int arr[], int n){
        int l = 0;
        int r = n-1;
        int mid;
        while (l <= r) {
            mid = l+(r-l)/2;
            // first case if mid is the answer
            if ((mid == 0 || arr[mid - 1] <= arr[mid])
                and (mid == n - 1 || arr[mid + 1] <= arr[mid])){
                    break;
            }
            // move the right pointer
            else if (mid > 0 and arr[mid - 1] > arr[mid]){
                r = mid - 1;
            }
            // move the left pointer
            else{
                l = mid + 1;
            }
          
        }
        return mid;
    }
};

// Time Complexity:O(logN)
// Space Complexity: O(1)

















