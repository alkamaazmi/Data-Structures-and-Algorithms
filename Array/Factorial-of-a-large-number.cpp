/*
 * GeeksForGeeks : Factorial of a large number
 */

class Solution {
public:
    void multiply(vector<int> &ans,int x){
        int carry=0;
        int product;
        for(int i=0;i<ans.size();i++){
            product=ans[i]*x+carry;
            ans[i]=product%10;
            carry=product/10;
        }
        int a;
        while(carry){
            a=carry%10;\
            ans.push_back(a);
            carry=carry/10;
        }
    }
    vector<int> factorial(int N){
       vector<int> ans;
       ans.push_back(1);
       for(int x=2;x<=N;x++){
           multiply(ans,x);
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};

// Time Complexity: O(N log (N!)), where O(N) is for loop and O(log N!) is for nested while loop
// Space Complexity: O(max(digits in factorial)) 