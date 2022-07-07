#include<bits/stdc++.h>
using namespace std;

 int findKthLargest(vector<int>& nums, int k) {
    ////Min-Heap Initialization
   priority_queue<int,vector<int>,greater<int>> minheap;
    
    //push first k elements into min-heap
        for(int i=0;i<k;i++){
            minheap.push(nums[i]);
        }

   //Now, if the element at top of min-heap is smaller, we remove it and add new element
        for(int i=k;i<nums.size();i++){
    
            if(nums[i]>minheap.top()){
                minheap.pop();
                minheap.push(nums[i]);
            }
        }
    //Return the top (smallest) of min-heap
        return minheap.top();
    }
    int main(){
     vector<int> nums={3,2,1,5,6,4};
     int k=2;
     int ans=findKthLargest(nums,k);
     cout<<ans<<endl;
     return 0;
   } 
   //Time complexity of this solution is O(k + (n-k)*Logk)