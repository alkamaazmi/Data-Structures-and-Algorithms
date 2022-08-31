/* 
 * GeeksForGeeks : Sum of upper and lower triangles
 * Given a square matrix of size N*N
 * print the sum of upper and lower triangular elements
 * Upper Triangle consists of elements on the diagonal and above it
 * The lower triangle consists of elements on the diagonal and below it
 * returns the list of integers containing the sum of upper and lower triangle
 */

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int> ans;
        int sum=0;
        //for upper triangles of a matrix
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum+=matrix[i][j];
            }
        }
        ans.push_back(sum);
        
        //for lower trianglse of a matrix
        sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                sum+=matrix[i][j];
            }
        }
        ans.push_back(sum);
        return ans;
    }
};

// Time Complexity: O(N*N)
// Space Complexity: O(1)