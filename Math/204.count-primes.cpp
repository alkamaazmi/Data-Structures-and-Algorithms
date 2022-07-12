/*
 * leetcode [204] Count Primes
 * Given an integer n, return the number of prime numbers that are strictly less than n
 */

class Solution {
public:
    int countPrimes(int n) {

        //create a boolean vector with all true values
	    vector<bool> v(n+1,true);
	 
        //mark the 0 and 1 as false bcz they are not prime
	    v[0]=false;
	    v[1]=false;

 	   //loop to find the prime number and mark its multiples as false
	    for(int i=2;i*i<=n;i++)
	    {
		   if(v[i]==true)
		    {

			  for(int j=i*i;j<=n;j+=i)
			  {
				v[j]=false;
			  }
		    }
	    }

	    //count the true values in the vector
	    int true_counter=0;
		for (int i=2;i<n;i++) {
			if (v[i]) {
				true_counter++;
			}
		}

	    return true_counter; 

    }
};

//Time Complexity: O(n*log(log(n)))
//Auxiliary Space: O(n)
