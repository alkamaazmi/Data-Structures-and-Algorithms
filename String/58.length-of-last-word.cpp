/*
 * Leetcode [58] Length of Last Word
 * Given a string s consisting of words and spaces, return the length of the last word in the string
 * A word is a maximal substring consisting of non-space characters only
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int tail = s.length() - 1;
        while(tail >= 0 && s[tail] == ' '){
            tail--;
        }
        while(tail >= 0 && s[tail] != ' '){
            len++;
            tail--;
        }
        return len;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)

