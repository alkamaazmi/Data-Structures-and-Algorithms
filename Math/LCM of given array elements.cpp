/*
 * LCM of given array elements 
 */

class Solution {
  public:
    long long int Gcd(long long int a,long long int b){
        if(b==0){
            return a;
        }else{
            Gcd(b,a%b);
        }
    }
    long long int lcm(int a,long long int b){
        long long int g=Gcd(a,b);
        long long int ans=((a*b)/g)%1000000007;
        return ans;
    }
    int lcmOfArray(int N , int A[]) {
       int ans=A[0];
       for(int i=1;i<N;i++){
           ans=lcm(ans,A[i])%1000000007;
       }
       return ans;
    }
};