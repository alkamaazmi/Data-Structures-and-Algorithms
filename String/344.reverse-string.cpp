/*
 * Leetcode [344] Reverse String
 * Write a function that reverses a string. The input string is given as an array of characters s
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        
        while(i <= j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)


