/*
 * GFG : Three way partitioning
 * Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
    1) All elements smaller than a come first.
    2) All elements in range a to b come next.
    3) All elements greater than b appear in the end.
 * The individual elements of three sets can appear in any order. You are required to return the modified array.
 */

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int n=arr.size();
         int s=0;
    int e=n-1;
    int i=0;
    while(i<=e){
        if(arr[i]<a){
            if(i==s){
                s++;
                i++;
            }else{
                swap(arr[i],arr[s]);
                s++;
                i++;
            }
        }else if(arr[i]>b){
            swap(arr[i],arr[e]);
            e--;
        }else{
            i++;
        }
    }
    }
};