/*
 * Leetcode [1941] Check if All Characters Have Equal Number of Occurrences
 * Given a string s, return true if s is a good string, or false otherwise
 * A string s is good if all the characters that appear in s have the same number of occurrences
 * s consists of lowercase English letters
 */

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int a[26]={0};
        for(auto i:s){
            a[i-'a']++;
        }
        int occur=a[s[0]-'a'];
        for(int i=1;i<s.size();i++){
            if(a[s[i]-'a']!=occur){
                return false;
            }
        }
        return true;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)




