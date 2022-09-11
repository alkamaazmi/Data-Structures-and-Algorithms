/*
 * GeeksForGeeks : Median in a row-wise sorted Matrix
 * Given a row wise sorted matrix of size RxC where R and C are always odd
 * find the median of the matrix
 * 1<= matrix[i][j] <=2000
 */

class Solution{   
public:
    int smallerThanMid(vector<int> &row,int c,int mid){
        int low=0;
        int high=c-1;
        while(low<=high){
            int m=low+(high-low)/2;
            if(row[m]<=mid){
                low=m+1;
            }else{
                high=m-1;
            }
        }
        return low;
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        int low=1;
        int high=2000;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=smallerThanMid(matrix[i],c,mid);
            }
            if(count<=(r*c)/2){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }
};

// Time Complexity: O(32*R*log(C))
// Space Complexity: O(1)












