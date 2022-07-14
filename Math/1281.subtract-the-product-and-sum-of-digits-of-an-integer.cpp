/*
 * [1281] Subtract the Product and Sum of Digits of an Integer
 * Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 */


class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0, t;
        while (n) {
            t = n % 10;
            p *= t;
            s += t;
            n /= 10;
        }
        return p - s; 
    }
};

// Time Complexity : O(logN)
// Space Complexity : O(1)
