/*
 * [697] Degree of an Array
 * Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
 * Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.
 */

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        //keep track of first position of element 
        map<int,int> first;

        //keep track of last position of element
        map<int,int> last;

        //keep track of frequency of element
        map<int,int> count;

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(first.count(nums[i])==0){
                first[nums[i]]=i;
            }
            last[nums[i]]=i;
            count[nums[i]]++;
        }
        
        //number with highest frequency
        int maxi=INT_MIN;
        for(auto i :count){
            maxi=max(maxi,i.second);
        }
        int ans=n;
        for(auto i:count){
            if(i.second==maxi){
                ans=min(ans,last[i.first]-first[i.first]+1);
            }
        }
        return ans;
    }
};

//Time Complexity:O(n)
//Space Complexity:O(n)






