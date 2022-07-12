/*
 * [1523] Count Odd Numbers in an Interval Range
 * Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).
 */

class Solution {
public:
    int countOdds(int low, int high) {

        // when both upper and lower limit is even
        if(low%2==0&&high%2==0){
            return (high-low)/2;
        }
        //  in remaining 3 cases
        else{
            int ans=(high-low)/2+1;
            return ans;
        }
    }
};

// Time complexity O(1)
