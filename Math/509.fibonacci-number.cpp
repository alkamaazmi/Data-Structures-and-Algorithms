/*
 * Leetcode [509] Fibonacci Number
 * The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones
 * Fn = Fn-1 + Fn-2
 */

class Solution {
public:
    int fib(int n) {
        float z = sqrt(5);
        long long int t = (pow(2,N)*z);
        long long int a = (pow(1+z,N));
        long long int b = (pow(1-z,N));
        return (a-b)/t;
    }
};
// F(n) = ((1+sqrt(5))^n - (1-sqrt(5))^n)/(2^n * sqrt(5))
// Time Complexity: O(logn), this is because calculating phi^n takes logn time
// Space Complexity: O(1)

