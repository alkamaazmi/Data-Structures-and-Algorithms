/*
 * GeeksForGeeks : Find if there is a subarray with 0 sum
 * Given an array of positive and negative numbers
 * Find if there is a subarray (of size at-least one) with 0 sum
 */

class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> s;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(s.find(sum)!=s.end() || sum==0){
                return true;
            }else{
                s.insert(sum);
            }
        }
        return false;
    }
};

// Time Complexity : O(n).
// Space Complexity : O(n)