/*
 * GeeksForGeeks : Maximum and minimum of an array using minimum number of comparisons
 */

pair<long long, long long> getMinMax(long long a[], int n) {
   if(n==1){
       return {a[0],a[0]};
   }
   pair<long long,long long> minmax;
   int i=0;
   if(n%2==0){
       if(a[i]<a[i+1]){
           minmax.first=a[i];
           minmax.second=a[i+1];
       }else{
           minmax.first=a[i+1];
           minmax.second=a[i];
       }
       i+=2;
   }else{
       minmax.first=a[i];
       minmax.second=a[i];
       i+=1;
   }
   while(i<n-1){
       if(a[i]<a[i+1]){
           if(a[i]<minmax.first){
               minmax.first=a[i];
           }
           if(a[i+1]>minmax.second){
               minmax.second=a[i+1];
           }
       }else{
           if(a[i]>minmax.second){
               minmax.second=a[i];
           }
           if(a[i+1]<minmax.first){
               minmax.first=a[i+1];
           }
       }
       i++;
   }
   return minmax;
   
}

// Time Complexity: O(n)
// Space Complexity: O(1)

/*   If n is odd:   3*(n-1)/2  
     If n is even:  1 Initial comparison for initializing min and max, 
                    and 3(n-2)/2 comparisons for rest of the elements  
                    =  1 + 3*(n-2)/2 = 3n/2 -2
*/

