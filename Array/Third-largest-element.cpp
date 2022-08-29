/*
 * GeeksForGeeks : Third largest element
 * Given an array of distinct elements. Find the third largest element in it
 */

class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n<3){
            return -1;
        }
        long long int first=LONG_MIN;
        long long int second=LONG_MIN;
        long long int third=LONG_MIN;
        for(int j=0;j<n;j++){
            int i=a[j];
            if(i>first){
                third=second;
                second=first;
                first=i;
            }else if(second<i ){
                third=second;
                second=i;
            }else if(third<i){
                third=i;
            }
        }
        return third;
    }

};

// Time Complexity : O(N)
// Space Complexity : O(1)