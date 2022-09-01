/*
 * Leetcode [54] Spiral Matrix
 * Given an m x n matrix, return all elements of the matrix in spiral order
 */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int count=0;
        int total=(matrix.size())*(matrix[0].size());
        int startRow=0;
        int startCol=0;
        int endRow=matrix.size()-1;
        int endCol=matrix[0].size()-1;
        while(count<total){
            for(int i=startCol;count<total&&i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow;count<total&&i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol;count<total&&i>=startCol;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            for(int i=endRow;count<total&&i>=startRow;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
            
        }
        return ans;

    }
};

// Time Complexity: O(N*M)
// Space Complexity: O(1)

