/*
 * Leetcode [796] Rotate String
 * Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s
 * s and goal consist of lowercase English letters
 */

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string temp=s+s;
        int p=temp.find(goal);
        if(p!=-1){
            return true;
        }
        return false;
    }
};

// Time Complexity:O(n)
// Space Complexity:O(1)

