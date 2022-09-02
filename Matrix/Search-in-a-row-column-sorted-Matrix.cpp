/*
 * GeeksForGeeks : Search in a row-column sorted Matrix
 * Given a matrix of size n x m, where every row and column is sorted in increasing order and a number x
 * Find whether element x is present in the matrix or not
 */

class Solution
{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i=0,j=m-1;
	    while(i<n and j>=0){
	        if(matrix[i][j]==x){
	            return 1;
	        }else if(x<matrix[i][j]){
	            j--;
	        }else{
	            i++;
	        }
	    }
	    return 0;
    }
};

// Time Complexity :  O(m + n)
// Space Complexity: O(1)