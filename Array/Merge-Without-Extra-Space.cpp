/*
 * GeeksForGeeks : Merge Without Extra Space
 * Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order
 * Merge them in sorted order without using any extra space
 * Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements
 */

class Solution{
    public:
        void merge(long long ar1[], long long ar2[], int n, int m) 
        { 
            int gap = ceil((float)(n + m) / 2);
            while (gap > 0) {
                int i = 0;
                int j = gap;
                while (j < (n + m)) {
                    if (j < n && ar1[i] > ar1[j]) {
                        swap(ar1[i], ar1[j]);
                    } else if (j >= n && i < n && ar1[i] > ar2[j - n]) {
                        swap(ar1[i], ar2[j - n]);
                    } else if (j >= n && i >= n && ar2[i - n] > ar2[j - n]) {
                        swap(ar2[i - n], ar2[j - n]);
                    }
                    j++;
                    i++;
                }
                if (gap == 1) {
                    gap = 0;
                } else {
                    gap = ceil((float) gap / 2);
                }
            }
        } 
};
// Time Complexity:  O((n+m) log(n+m))
// Space Complexity: O(1)