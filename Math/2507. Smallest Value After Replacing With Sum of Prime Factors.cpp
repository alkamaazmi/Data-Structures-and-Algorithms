/*
 * 2507. Smallest Value After Replacing With Sum of Prime Factors
 * Continuously replace n with the sum of its prime factors.
 */

class Solution {
public:
  int arr[100001];
  void seive(){
        for(int i=0;i<100001;i++){
            arr[i]=i;
        }
        for(int i=4;i<100001;i+=2){
            arr[i]=2;
        }
        for(int i=3;i*i<100001;i+=2){
            if(arr[i]==i){
                for(int j=i*i;j<100001;j+=i){
                    if(arr[j]==j){
                        arr[j]=i;
                    }
                }
            }
        }
  }
    
    int primeSum(int n){
        int sum=0;
        while(n>1){
            sum+=arr[n];
            n=n/arr[n];
        }
        return sum;
    }
    int smallestValue(int n) {
         seive();
         while(1){
            int n1=primeSum(n);
            if(n==n1){
                break;
            }else{
                n=n1;
            }
         }
         return n;
        
    }
};