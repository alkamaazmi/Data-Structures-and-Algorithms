#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    
  int sum=0,maximum=0;
  for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum<0){
          sum=0;
      }
      maximum=max(sum,maximum);
  }
  return maximum;
    
}


int main()
{
    int t,n;
    
    cin>>t;
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << maxSubarraySum(a, n) << endl;
    }
    return 0;
}
  