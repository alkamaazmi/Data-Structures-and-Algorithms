/*
 * leetcode [242] Valid Anagram
 * Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase
 * s and t consist of lowercase English letters.
 */


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()==t.size()){
            int a[26]={0};
            for(auto c:s){
                a[c-'a']++;
            }
            for(auto c:t){
                a[c-'a']--;
            }
            for(int i=0;i<26;i++){
                if(a[i]!=0){
                    return false;
                }
            }
            return true;
        }else{
            return false;
        }
    }
};
//Time Complexity: O (n)
//Space Complexity: O(1)

