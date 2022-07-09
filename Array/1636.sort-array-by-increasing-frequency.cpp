/*
 * [1636] Sort Array by Increasing Frequency
 * sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
 */

class Solution {
public:
     static bool sortby(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        vector<pair<int,int>> temp;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            //Saves numbers and their frequency
            mp[nums[i]]++;
        }
         for(auto it:mp){
            temp.push_back({it.first,it.second});
        }
        sort(temp.begin(),temp.end(),sortby);
        for(int i=0;i<temp.size();i++){
            while(temp[i].second>0){
                ans.push_back(temp[i].first);
                temp[i].second--;
            }
        }
        return ans;
    }
};


