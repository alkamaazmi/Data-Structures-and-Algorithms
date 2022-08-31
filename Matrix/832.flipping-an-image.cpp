/*
 * Leetcode [832] Flipping an Image
 * Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image
 * To flip an image horizontally means that each row of the image is reversed
 * To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0
 */

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            reverse(image[i].begin(),image[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              image[i][j]=image[i][j]^1;
            }
        }
        return image;
    }
};

// Time Complexity: O(N^2)
// Space Complexity: O(1)

