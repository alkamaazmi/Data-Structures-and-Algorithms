/*
 * GeeksForGeeks : Transpose of Matrix
 * Write a program to find the transpose of a square matrix of size N*N
 * Transpose of a matrix is obtained by changing rows to columns and columns to rowss
 */
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
       for(int i=0;i<n;i++){
           for(int j=0;j<i;j++){
               swap(matrix[i][j],matrix[j][i]);
           }
       }
    }
};

// Time Complexity: O(N*N)
// Space Complexity: O(1)