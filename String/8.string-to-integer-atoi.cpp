/*
 * [8] String to Integer (atoi)
 */

class Solution {
public:
    bool isDigit(char ch){
        return ch >= '0' && ch <= '9';
    }
    int myAtoi(string s) {
        int len=s.length();
        if(len==0){
            return 0;
        }
        int ind=0;
        while(ind<len and s[ind]==' '){
            ind++;
        }
        bool isNeg=false;
        if(ind<len){
            if(s[ind]=='-'){
                isNeg=true;
                ind++;
            }else if(s[ind]=='+'){
                isNeg=false;
                ind++;
            }
        }
        int result=0;
        while(ind<len and isDigit(s[ind])==true){
            int digit = s[ind] - '0';
            if(result > (INT_MAX / 10)||(result==(INT_MAX/10)&&digit>7)){
                return isNeg? INT_MIN : INT_MAX;
            }
            result = (result * 10) + digit;
            ++ind;

        }
         return isNeg ? -result : result;
    }
};


