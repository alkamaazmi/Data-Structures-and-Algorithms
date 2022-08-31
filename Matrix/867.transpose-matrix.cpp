/*
 * Leetcode [867] Transpose Matrix 
 * Given a 2D integer array matrix, return the transpose of matrix
 * The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices
 */

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> res(m,vector<int> (n,0)); // matrix creation
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][i] = matrix[i][j]; // filling the matrix in transpose form
            }
        }
        return res; 
    }
};
// Time Complexity: O(R∗C), where R and C are the number of rows and columns in the given matrix A.
// Space Complexity: O(R∗C), the space used by the answer
