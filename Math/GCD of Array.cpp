/*
 * GCD of Array
 */

class Solution
{
	public:
	int _gcd(int a,int b){
	    if(b==0){
	        return a;
	    }else{
	        return _gcd(b,a%b);
	    }
	}
	
    int gcd(int N, int arr[])
    {
       int result=arr[0];
       for(int i=1;i<N;i++){
           result=_gcd(result,arr[i]);
           if(result==1){
               return 1;
           }
       }
       return result;
        
    }
};