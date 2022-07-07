//Program to Reverse a String 
#include <bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main()
{
  string s;
  getline(cin,s);//read string with space
  cout<<reverseWord(s)<<endl;
  
}
string reverseWord(string str){
    
    int size=str.length();
    int start=0;
    int end=size-1;
    while(start<end){
       char temp=str[start];
       str[start]=str[end];
       str[end]=temp;
       start++;
       end--;
    }
     return  str;
 
}