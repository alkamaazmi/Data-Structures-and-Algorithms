/*
 * [1331] Rank Transform of an Array
 * Given an array of integers arr, replace each element with its rank.
 * Rank is an integer starting from 1.
 * The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
 */

class Solution {
public:
     static bool sortby(pair<int,int> a,pair<int,int> b){
        return a.first<b.first;
    }

    vector<int> arrayRankTransform(vector<int>& arr) {

        //Each tuple stores the data as well as its index in temp
        vector<pair<int,int>> temp;
        for(int i=0;i<arr.size();i++){
            temp.push_back({arr[i],i});
        }

        // Sort according to first element
        sort(temp.begin(),temp.end(),sortby);

        int rank=1;
        for(int i=0;i<temp.size();i++){
            if(i!=0 and temp[i].first==temp[i-1].first){
                arr[temp[i].second]=rank-1;
            }else{
                arr[temp[i].second]=rank;
                rank++;
            }
            
        }
        return arr;
    }
};
//Time Complexity: O(N Log N)
//Space Complexity: O(N)

