/*
 * GeeksForGeeks Linear Search
 * Given the array arr[], its size N and the element X as inputs
 * returns the index of first occurrence of X in the given array
 * If the element X does not exist in the array, the function should return -1
 */
class Solution{
    public:
    int search(int arr[], int N, int X)
    {
        for(int i=0;i<N;i++){
            if(arr[i]==X){
                return i;
            }
        }
        return -1;
    }

};
