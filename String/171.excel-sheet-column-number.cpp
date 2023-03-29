/*
 * [171] Excel Sheet Column Number
 */

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int ans=0;
        int k=0;
        for(int i=n-1;i>=0;i--){
            int d=columnTitle[i]-'A'+1;
            ans+=d*pow(26,k);
            k++;
        }
        return ans;
    }
};


