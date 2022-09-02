/*
 * Leetcode [74] Search a 2D Matrix
 * Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix
 * Integers in each row are sorted from left to right
 * The first integer of each row is greater than the last integer of the previous row
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0;
        int hi=(n*m)-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(matrix[mid/m][mid%m]==target){
                return true;
            }else if(target<matrix[mid/m][mid%m]){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return false;
    }
};
// Time complexity: O(log(n*m))
// Space complexity: O(1)


