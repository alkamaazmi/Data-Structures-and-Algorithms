/*
 * Leetcode [414] Third Maximum Number
 * Given an integer array nums, return the third distinct maximum number in this array
 * If the third maximum does not exist, return the maximum number
 */

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int first=LONG_MIN;
        long long int second=LONG_MIN;
        long long int third=LONG_MIN;
        for(int i : nums){
            if(i>first){
                third=second;
                second=first;
                first=i;
            }else if(second<i and i!=first){
                third=second;
                second=i;
            }else if(third<i and i!=second and i!=first){
                third=i;
            }
        }
        if(third==LONG_MIN){
            return (int)first;
        }else{
            return (int)third;
        }
    }
};

//Time Complexity:O(n)
//Space Complexity:O(1)


