/*
 * GFG : Missing element of AP
 */

class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d=(arr[n-1]-arr[0])/n;
        for(int i=1;i<n;i++){
            int num=arr[i-1]+d;
            if(num!=arr[i]){
                return num;
            }
        }
        return -1;
    }
};

// Time Complexity is O(n) 
// Space Complexity is O(1)

/*****************************************************************************/

class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d=(arr[n-1]-arr[0])/n;
        int low=0;
        int high=n-1;
        
        while(low<high){
            int mid=(high-low)/2+low;
            if(mid<n-1 and (arr[mid+1]-arr[mid])!=d ){
                return arr[mid]+d;
            }else if(mid>0 and (arr[mid]-arr[mid-1])!=d){
                return arr[mid-1]+d;
            }else if(arr[mid]==arr[0]+mid*d){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
};


// Time Complexity: O(logn)
// Space Complexity is O(1)

/**************************************************************************/