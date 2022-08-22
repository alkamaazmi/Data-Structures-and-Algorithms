/*
 * Leetcode [66] Plus One
 * You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer
 * The digits are ordered from most significant to least significant in left-to-right order
 * The large integer does not contain any leading 0's
 * Increment the large integer by one and return the resulting array of digits
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n  = digits.size() ;

        while(1)
        {  // if the digit is not nine then simply add it
            if(digits[n-1]!= 9)
            {
                digits[n-1]++;
                return digits;
            }
			// if 9 then 9+1 is 10 we need the 0 only 
            else 
            {
                digits[n-1] = 0 ;
                --n;
            }
           // if all nine then first digit will be zero add one in the begining
            if(digits[0] == 0)
            {
                digits.insert(digits.begin(),1);
                return digits;
            }
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)

