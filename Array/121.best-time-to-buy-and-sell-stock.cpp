/*
 * Leetcode [121] Best Time to Buy and Sell Stock
 * You are given an array prices where prices[i] is the price of a given stock on the ith day
 * You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock
 * Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

