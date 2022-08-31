/*
 * Leetcode [48] Rotate Image
 * You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise)
 */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //Perform Transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reverse every individual  row
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

// Time Complexity: O(N*N)
// Space Complexity: O(1)

