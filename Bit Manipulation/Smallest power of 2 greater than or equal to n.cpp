/*
 * Smallest power of 2 greater than or equal to n
 */

class Solution{
    public:
    long long nearestPowerOf2(long long n){
        if((n&(n-1))==0){
            return n;
        }
        while(n&(n-1)){
            n=n&(n-1);
        }
        return n<<1;
    }
};


