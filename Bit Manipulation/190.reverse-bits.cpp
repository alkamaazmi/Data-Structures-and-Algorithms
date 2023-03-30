/*
 * [190] Reverse Bits
 */

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         int arr[32];
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                arr[i]=1;
            }else{
                arr[i]=0;
            }
        }
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            ans+=arr[i]*(1<<(31-i));
        }
        return ans;
    }
};


