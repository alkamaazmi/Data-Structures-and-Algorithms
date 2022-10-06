/*
 * Leetcode [67] Add Binary
 * Given two binary strings a and b, return their sum as a binary string
 * a and b consist only of '0' or '1' characters
 * Each string does not contain leading zeros except for the zero itself
 */

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string s = "";

        while (i >= 0 || j >= 0)
        {
            int sum = carry;
            if (i >= 0)
            {
                sum += (a[i] - '0');
                i--;
            }
            if (j >= 0)
            {
                sum += (b[j] - '0');
                j--;
            }
            int temp = sum % 2;
            s += to_string(temp);
            carry = sum / 2;
        }
        if (carry > 0)
        {
            s += to_string(carry);
        }
        reverse(s.begin(), s.end());
        return s;
    }
};

// Time Complexity : O(max(M, N)), M & N is the length of string a, b;
// Space Complexity : O(max(M, N)), which is the size of "res" object
