/*
 * GeeksForGeeks : Row with max 1s
 * Given a boolean 2D array of n x m dimensions where each row is sorted
 * Find the 0-based index of the first row that has the maximum number of 1's
 *  If no such row exists, return -1
 */

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i=0,j=m-1;
	    int row=-1;
	    while(j>=0 and i<n){
	        if(arr[i][j]==1){
	            row=i;
	            j--;
	        }else{
	            i++;
	        }
	    }
	    return row;
	}

};

// Time Complexity: O(N+M)
// Space Complexity: O(1)