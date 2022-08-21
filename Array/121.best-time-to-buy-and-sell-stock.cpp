/*
 * Leetcode [121] Best Time to Buy and Sell Stock
 * Given an integer numRows, return the first numRows of Pascal's triangle
 * In Pascal's triangle, each number is the sum of the two numbers directly above it
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> ret;
	    for (int i = 0; i < numRows; i++) {
		    vector<int> row(i + 1, 1);
		    for (int j = 1; j < i; j++) {
			    row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
		    }
		    ret.push_back(row);
	    }
	    return ret;
    }
}

// Time Complexity : O(n^2)
// Space Complexity : O(n^2)