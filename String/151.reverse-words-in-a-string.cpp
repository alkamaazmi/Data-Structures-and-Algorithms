/*
 * Leetcode [151] Reverse Words in a String
 * Given an input string s, reverse the order of the words
 * A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space
 * Return a string of the words in reverse order concatenated by a single space
 * s may contain leading or trailing spaces or multiple spaces between two words.
 * The returned string should only have a single space separating the words. Do not include any extra spaces
 */

class Solution
{
public:
    void reverse(string &s, int start, int end)
    {
        while (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    string reverseWords(string s)
    {
        if (s.length() == 0)
        {
            return s;
        }
        // reverse the individual words of the given string one by one
        int i = 0, j = 0;
        while (i < s.length())
        {
            if (i < s.length() and s[i] == ' ')
            {
                i++;
                continue;
            }
            j = i;
            while (i < s.length() and s[i] != ' ')
            {
                i++;
            }
            reverse(s, j, i - 1);
        }
        // reverse the whole string
        reverse(s, 0, s.length() - 1);

        // leading and trailing triming
        i = 0;
        while (s[i] == ' ')
        {
            i++;
        }
        s.erase(s.begin(), s.begin() + i);
        i = s.length() - 1;
        while (s[i] == ' ')
        {
            i--;
        }
        s.erase(s.begin() + i + 1, s.end());
        // Removing extra spaces in btw
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                int k = i + 1;
                while (s[k] == ' ')
                {
                    k++;
                }
                s.erase(s.begin() + i + 1, s.begin() + k);
            }
        }
        return s;
    }
};
// Time Complexity - O(N*N)
// Space Complexity - O(1)

/* using stack */
class Solution {
public:
    string reverseWords(string s) {
        if(s.length()==0){
            return s;
        }
        stack<string> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            string word;
            while(i<s.length() and s[i]!=' '){
                word+=s[i];
                i++;
            }
            stack.push(word);
        }
        string ans;
        while(!stack.empty()){
            ans+=stack.top();
            stack.pop();
            if(!stack.empty()){
                ans+=" ";
            }
        }
        return ans;
    }
};
// Time Complexity - O(N)
// Space Complexity - O(N)