/*
 * GeeksForGeeks : Set the K-th bit of a given number
 * Given a number N and a value K
 * From the right, set the Kth bit in the binary representation of N
 * The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on
 * returns an integer after setting the K'th bit in N
 */

class Solution{
public:
    int setKthBit(int N, int K){

        N=N|(1<<K);
        return N;
    }
    
};

// Time Complexity : O(1)
// Space Complexity : O(1)