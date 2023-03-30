/*
 * [137] Single Number II
 * Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=a.size();
        int k=3;
        int arr[32]={0};
        for(int i=0;i<32;i++){
            for(int j=0;j<n;j++){
                if(a[j]&(1<<i)){
                    arr[31-i]++;
                }
            }
        }
        int ans=0;
        int j=31;
        for(int i=0;i<32;i++){
            arr[i]=arr[i]%k;
            ans+=arr[i]*(1<<j);
            j--;
        }
        return ans;
    }
};


