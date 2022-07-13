/*
 * Leetcode [507] Perfect Number
 * Given an integer n, return true if n is a perfect number, otherwise return false.
 * A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
 */

class Solution {
public:
    bool checkPerfectNumber(int num) {

           if(num<=1){
            return false;
           }

           int sum=0;
           for(int i = 1; i*i <= num; i++){
               if(num%i==0){
                    if(i*i==num || i==1){
                         sum =sum + i;
                    }else{
                          sum = sum+ i + num/i;
                    } 
                } 
            } 
            
           if(sum==num){
                return true;
           }else{
                return false;
           }  
    }
};

// Time Complexity: O(√n)
// Auxiliary Space: O(1)


