/*
 * Leetcode [378] Kth Smallest Element in a Sorted Matrix
 * Given an n x n matrix where each of the rows and columns is sorted in ascending order
 * return the kth smallest element in the matrix
 * Note that it is the kth smallest element in the sorted order, not the kth distinct element
 */

class Solution {
public:
    int smallerThanOrEqualToMid(vector<vector<int>> &matrix,int row,int col,int mid){
        int count=0;
        for(int i=0;i<row;i++){
            int low=0,high=col-1;
            while(low<=high){
                int m=low+(high-low)/2;
                if(matrix[i][m]<=mid){
                    low=m+1;
                }else{
                    high=m-1;
                }
            }
            count+=low;
        }
        return count;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        int low=matrix[0][0];
        int high=matrix[row-1][col-1];
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=smallerThanOrEqualToMid(matrix,row,col,mid);
            if(count>=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};

// Time Complexity: O(y*n*logn) where y=log(abs(Mat[0][0]-Mat[n-1][n-1]))
// Space Complexity:O(1)















