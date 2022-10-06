/*
 * Leetcode [415] Add Strings
 * Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string
 */

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        string s = "";
        while (i >= 0 || j >= 0 || carry > 0)
        {
            int sum = carry;
            if (i >= 0)
            {
                sum += num1[i] - '0';
                i--;
            }
            if (j >= 0)
            {
                sum += num2[j] - '0';
                j--;
            }
            s += to_string(sum % 10);
            carry = sum / 10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
// Time Complexity : O(max(M, N)), M & N is the length of string num1, num2;
// Space Complexity : O(max(M, N)), which is the size of "s" object
