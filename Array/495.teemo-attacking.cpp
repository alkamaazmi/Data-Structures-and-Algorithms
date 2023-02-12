/*
 * [495] Teemo Attacking
 */

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=0;
        int n=timeSeries.size();     
        for(int i=0;i<n;i++){
            if(i+1<n and (timeSeries[i]+duration-1)>=timeSeries[i+1]){
                ans+=timeSeries[i+1]-timeSeries[i];
            }else{
                ans+=duration;
            }
        }
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)


