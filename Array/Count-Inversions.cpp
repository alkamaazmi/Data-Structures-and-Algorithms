/*
 * GeeksForGeeks : Count Inversions
 * Given an array of integers. Find the Inversion Count in the array
 * two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
 */

class Solution{
  public:
    long long int merge(long long int arr[],long long int l,long long int mid,long long int r){
        long long int inversion=0;
        long long int i=l;
        long long int j=mid+1;
        long long int k=l;
        long long int temp[r+1];
        
        while(i<=mid&&j<=r){
            if(arr[i]>arr[j]){
                inversion+=(mid-i+1);
                temp[k++]=arr[j++];
            }else{
                temp[k++]=arr[i++];
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=r){
            temp[k++]=arr[j++];
        }

        for(long long int t=l;t<=r;t++){
            arr[t]=temp[t];
        }
        return inversion;
    }

    long long int mergesort(long long int arr[],long long int l,long long int r){
        long long int inversion=0;
        if(l<r){
            long long int mid=(l+r)/2;
            inversion+=mergesort(arr,l,mid);
            inversion+=mergesort(arr,mid+1,r);
            inversion+=merge(arr,l,mid,r);
        }
        return inversion;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int inversion=mergesort(arr,0,N-1);
        return inversion;
    }

};

// Time Complexity: O(nlogn)
// Space Complexity: O(n)

