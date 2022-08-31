/*
 * Leetcode [1672] Richest Customer Wealth
 * You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank
 * Return the wealth that the richest customer has
 * A customer's wealth is the amount of money they have in all their bank accounts
 * The richest customer is the customer that has the maximum wealth
 */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        int m=accounts.size(); //no. of rows
        int n=accounts[0].size(); //no. of columns
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=accounts[i][j];
            }
            wealth=max(wealth,sum);
        }
        return wealth;
    }
};

// Time Complexity: O(N*M)
// Space Complexity: O(1)



