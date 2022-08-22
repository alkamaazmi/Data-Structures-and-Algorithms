/*
 * Leetcode [122] Best Time to Buy and Sell Stock II
 * You are given an integer array prices where prices[i] is the price of a given stock on the ith day
 * On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day
 * Find and return the maximum profit you can achieve
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0, profit=0, buy, sell;
        while(i < prices.size()-1){
            while(i < prices.size()-1 && prices[i+1] <= prices[i]){
                i++;
            }
            buy = prices[i];
            while(i < prices.size()-1 && prices[i+1] >=prices[i]){
                i++;
            }
            sell = prices[i];
            profit += sell - buy;
        }
        return profit;
    }
};

// Time complexity : O(n)
// Space complexity : O(1)

