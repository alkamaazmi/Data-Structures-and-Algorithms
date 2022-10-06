/*
 * GeeksForGeeks :  Multiply Strings
 * Given two numbers as strings s1 and s2. Calculate their Product
 * The numbers can be negative
 */

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
        {
            return "0";
        }
        if (num1[0] == '-' and num2[0] != '-')
        {
            string res = multiplyStrings(&num1[1], num2);
            res.insert(0, "-");
            return res;
        }
        if (num1[0] != '-' and num2[0] == '-')
        {
            string res = multiplyStrings(num1, &num2[1]);
            res.insert(0, "-");
            return res;
        }
        if (num1[0] == '-' and num2[0] == '-')
        {
            return multiplyStrings(&num1[1], &num2[1]);
        }

        int n1 = num1.length();
        int n2 = num2.length();
        vector<int> temp(n1 + n2, 0);
        for (int i = n1 - 1; i >= 0; i--)
        {
            for (int j = n2 - 1; j >= 0; j--)
            {
                temp[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                temp[i + j] += temp[i + j + 1] / 10;
                temp[i + j + 1] %= 10;
            }
        }
        int i = 0;
        while (temp[i] == 0)
        {
            i++;
        }
        string s = "";
        while (i < temp.size())
        {
            s += (temp[i] + '0');
            i++;
        }
        return s;
    }
};
// Time Complexity: O(n1*n2)
// Space Complexity: O(n1+n2)



