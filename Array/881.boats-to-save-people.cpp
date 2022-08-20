/*
 * Leetcode [881] Boats to Save People
 * You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit
 * Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit
 * Return the minimum number of boats to carry every given person
 */

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int i = 0, j = people.size() - 1,cnt = 0;
        
        while(i <= j)
        {   
            // lightest person + heaviest person sum <= limit
            // they can go together
            if(people[i] + people[j] <= limit)
            {
                ++i;
                --j;
            }
            // if sum is over the limit,
            // heaviest will go alone.
            else{
                --j;
            }
            ++cnt;  // number of boats
        }
        
        return cnt;
    }
};
// Time Complexity: O(NlogN)
// Space Complexity: O(log N)


