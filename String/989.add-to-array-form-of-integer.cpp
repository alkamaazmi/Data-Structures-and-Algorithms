/*
 * Leetcode [989] Add to Array-Form of Integer
 * The array-form of an integer num is an array representing its digits in left to right order
 * Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k
 */
class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        // Peforming element wise sum
        for (int i = num.size() - 1; i >= 0 && k > 0; i--)
        {
            num[i] += k;
            k = num[i] / 10;
            num[i] %= 10;
        }

        // if carry left, insert it in vector in front
        while (k > 0)
        {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }

        return num;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
