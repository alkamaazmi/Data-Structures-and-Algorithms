/*
 * Leetcode [125] Valid Palindrome
 * A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward
 * Alphanumeric characters include letters and numbers
 * Given a string s, return true if it is a palindrome, or false otherwise.
 */

class Solution {
public:
    bool valid(char ch){
        if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A')||(ch<='9'&&ch>='0')){
            return true;
        }
        return false;
    }
    char toupper(char ch){
        if((ch<='z'&&ch>='a')||(ch<='9'&&ch>='0')){
            return ch;
        }else{
            return (ch-'A'+'a');
        }
    }
    bool isPalindrome(string s) {
         for(int i=0;i<s.size();i++){
           if(valid(s[i])){
               continue;
           }else{
               s.erase(i,1);
               i=i-1;
           }
       }
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
        int start=0,end=s.size()-1;
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)



