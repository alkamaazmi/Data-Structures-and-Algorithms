/*
 * [1365] How Many Numbers Are Smaller Than the Current Number
 * Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
 * 0 <= nums[i] <= 100
 */

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i, j;
        vector<int> answer;
        int count[101] = {0};
		int len = nums.size();

        for(i = 0; i < len; i++) {
            count[nums[i]]++;
        }

        for(i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }

        for(i = 0; i < len; i++) {
            if(nums[i] == 0){
                answer.push_back(0);
            } 
            else{
                 answer.push_back(count[nums[i] - 1]);
            }  
        }

        return answer;
    }
};
// Time Complexity : O(max(n,100))



