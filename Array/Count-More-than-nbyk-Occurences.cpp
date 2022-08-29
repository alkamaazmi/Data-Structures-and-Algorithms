/*
 * GeeksForGeeks : Count More than n/k Occurences
 * Given an array arr[] of size N and an element k
 * The task is to find all elements in array that appear more than n/k times
 */

class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i:mp){
            if(i.second>n/k){
                count++;
            }
        }
        return count;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(N)