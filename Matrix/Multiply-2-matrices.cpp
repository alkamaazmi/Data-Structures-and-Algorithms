/*
 * GeeksForGeeks: For 2 given matrices of size n x n. Your task is to multiply them
 * Copy the values of output matrix into matrixA
 */

class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
       int n=matrixA.size();
       int ans[n][n];
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               int sum=0;
               for(int k=0;k<n;k++){
                   sum=sum+matrixA[i][k]*matrixB[k][j];
               }
              ans[i][j]=sum;
           }
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               matrixA[i][j]=ans[i][j];
           }
       }
    }
};

// Time Compelxity: O(n3)
// Space Complexity: O(n2)