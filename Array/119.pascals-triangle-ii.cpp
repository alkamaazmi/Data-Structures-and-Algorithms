/*
 * Leetcode [119] Pascal's Triangle II
 * Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle
 * In Pascal's triangle, each number is the sum of the two numbers directly above 
 */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        ans[0]=ans[rowIndex]=1;
        long long temp=1;
        int up=rowIndex;
        for(int i=1;i<rowIndex;i++){
            temp=temp*up/i;
            ans[i]=(int)temp;
            up--;
           
        }
        return ans;   
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)


