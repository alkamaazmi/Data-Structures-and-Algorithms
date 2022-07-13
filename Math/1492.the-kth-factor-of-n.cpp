/*
 * Leetcode [1492] The kth Factor of n
 * Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
 */

class Solution {
public:
    int kthFactor(int n, int k) {

        vector<int> factors;

        for(int i=1;i<=n;i++){
            if(n%i==0){
                factors.push_back(i);
            }
        }

        if(k>factors.size()){
            return -1;
        }
        
        return factors[k-1];
    }
};


