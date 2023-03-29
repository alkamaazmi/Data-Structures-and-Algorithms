/*
 * [342] Power of Four
 * Given an integer n, return true if it is a power of four. Otherwise, return false.
 */

class Solution {
public:
    bool isPowerOfFour(int n) {
         if(n<=0){
            return false;
        }
        
        return ((n&(n-1))==0)&&((n&0xAAAAAAAA)==0);
    }
};


