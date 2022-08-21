/*
 * Leetcode [69] Sqrt(x)
 * Given a non-negative integer x, compute and return the square root of x
 * Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned
 */

class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x;
        long long int sqr;
        long long int ans;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            sqr=mid*mid;
            if(sqr==x){
                ans=mid;
                break;
            }else if(sqr<x){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
};

// Time complexity: (log N)
// Space complexity: O(1)


