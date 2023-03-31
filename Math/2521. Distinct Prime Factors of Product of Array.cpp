/*
 * 2521. Distinct Prime Factors of Product of Array
 * Given an array of positive integers nums, return the number of distinct prime factors in the product of the elements of nums.
 */

class Solution {
public:
    int arr[1001];
    void seive(){
        for(int i=0;i<1001;i++){
            arr[i]=i;
        }
        for(int i=4;i<1001;i+=2){
            arr[i]=2;
        }
        for(int i=3;i*i<1001;i+=2){
            if(arr[i]==i){
                for(int j=i*i;j<1001;j+=i){
                    if(arr[j]==j){
                        arr[j]=i;
                    }
                }
            }
        }
    }
    void prime(set<int> &st,int n){
          while(n>1){
              st.insert(arr[n]);
              n=n/arr[n];
          }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        seive();
        set<int> st;
        for(auto i:nums){
           prime(st,i);
        }
        return st.size();
               
    }
};



class Solution {
public:
    void addPrimeFactor(set<int> &st,int n){
        int divisor=2;
        while(n>1){
            if(n%divisor==0){
                st.insert(divisor);
                n=n/divisor;
            }else{
                divisor++;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> st;
        for(auto i:nums){
           addPrimeFactor(st,i);
        }
        return st.size();        
    }
};