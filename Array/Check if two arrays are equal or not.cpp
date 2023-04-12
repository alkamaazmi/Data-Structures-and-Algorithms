/*
 * Check if two arrays are equal or not
 */

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if(A[i]!=B[i]){
                return false;
            }
        }
        return true;
    }
};

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[A[i]]++;
        }
        for(int i=0;i<N;i++){
            if(mp.find(B[i])==mp.end()){
                return false;
            }
            else if(mp[B[i]]==0){
                return false;
            }
            else{
               mp[B[i]]--; 
            }
        }
        return true;
    }
};