/*
 * leetcode [9] Palindrome Number
 * Given an integer x, return true if x is palindrome integer.
 * An integer is a palindrome when it reads the same backward as forward.
 */


class Solution {
public:
    bool isPalindrome(int x) {
        //if x is negative return false
         if(x<0){
            return false;
        }

        int tempx =x;
        long long revx=0;
        //reverse the digits of x
        while(tempx!=0){
            int digit=tempx%10;
            revx=revx*10+digit;
            tempx=tempx/10;
        }
        //check if x and revx are same or not
        if(x==revx){
            return true;
        }else{
            return false;
        }
    }
};
// Time Complexity: O(logN) 
// Auxiliary Space: O(1)

