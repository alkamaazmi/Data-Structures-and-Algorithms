/* 
 * GeeksForGeeks : Given three arrays sorted in increasing order 
 * Find the elements that are common in all three arrays
 */

class Solution
{
    public:    
       void next(int a[],int &x,int n){
           do{
               ++x;
           }while(x<n&&a[x-1]==a[x]);
       }

       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
           vector<int> ans;
           int i=0,j=0,k=0;
           while(i<n1&&j<n2&&k<n3){
               if((A[i]==B[j])&&(B[j]==C[k])){
                   ans.push_back(A[i]);
                   next(A,i,n1);
                   next(B,j,n2);
                   next(C,k,n3);
               }else if(A[i]<B[j]){
                   next(A,i,n1);
               }else if(B[j]<C[k]){
                   next(B,j,n2);
               }else{
                   next(C,k,n3);
               }
           }
           if(ans.empty()){
               ans.push_back(-1);
               return ans;
           }
           return ans;
        }

};

// Time Complexity : O(n1 + n2 + n3)
// Space Complexity : O(1)

