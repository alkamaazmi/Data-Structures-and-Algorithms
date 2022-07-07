#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;
    }
    int main(){
        vector<int> arr={1,2,3,4,5,6,7,8,9};
        int target=5;
        vector<int> ans=twoSum(arr,target);
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return 0;
    }