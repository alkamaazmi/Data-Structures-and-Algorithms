/*
 * Leetcode [387] First Unique Character in a String
 * Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
 * s consists of only lowercase English letters.
 */

class Solution {
public:
    int firstUniqChar(string s) {
        int v[26]={0};
        for(char c : s) {
            v[c - 'a']++;
        }

		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)

