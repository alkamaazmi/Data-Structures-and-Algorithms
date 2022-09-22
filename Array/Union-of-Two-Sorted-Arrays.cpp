/*  
 * GeeksForGeeks : Union of Two Sorted Arrays
 * Given two sorted arrays of size n and m respectively, find their union
 */

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i = 0, j = 0; 
        vector<int> ans;
        while (i < n && j < m) 
        { 
            while(i+1<n  &&  arr1[i]==arr1[i+1])
                i++;
            while(j+1<m  &&  arr2[j]==arr2[j+1])
                j++;
            if (arr1[i] < arr2[j]) 
                ans.push_back(arr1[i++]);
          
            else if (arr2[j] < arr1[i]) 
                ans.push_back(arr2[j++]);
            else
            {
                ans.push_back(arr2[j++]);
                i++;
            }
        } 
        while(i < n)
        {
            while(i+1<n  &&  arr1[i]==arr1[i+1])
                i++;
            ans.push_back(arr1[i++]);
        }
        while(j < m)
        {
            while(j+1<m  &&  arr2[j]==arr2[j+1])
                j++;
            ans.push_back(arr2[j++]);
        }
        return ans;
    }
};

// Time Complexity: O(m+n) where m & n are the sizes of the arrays.
// Space Complexity: O(1)