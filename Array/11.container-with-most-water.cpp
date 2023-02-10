/*
 * Leetcode : [11] Container With Most Water
 * You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
 * Find two lines that together with the x-axis form a container, such that the container contains the most water.
 * Return the maximum amount of water a container can store.
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxw=0;;
        int s=0;
        int e=n-1;
        while(s<e){
            if(height[s]<=height[e]){
                maxw=max(maxw,(e-s)*height[s]);
                s++;
            }else{
                maxw=max(maxw,(e-s)*height[e]);
                e--;
            }
        }
        return maxw;
    }
};

//Time complexity is O(n)
//space comlexity is O(1)


