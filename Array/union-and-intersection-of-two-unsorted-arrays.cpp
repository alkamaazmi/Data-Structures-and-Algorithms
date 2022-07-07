#include<bits/stdc++.h>
using namespace std;
vector<int> UnionOfTwoArrays(vector<int> &nums1,vector<int> &nums2);
vector<int> IntersectionOfTwoArrays(vector<int> &nums1,vector<int> &nums2);
int main(){
    vector<int> nums1={7, 1, 5, 2, 3, 6};
    vector<int> nums2={3, 8, 6, 20, 7};
    vector<int> Union;
    vector<int> Intersection;
    Union=UnionOfTwoArrays(nums1,nums2);
    Intersection=IntersectionOfTwoArrays(nums1,nums2);
    cout<<"Union of two arrays"<<endl;
    for(int i: Union){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Intersection of two arrays"<<endl;
    for(int i : Intersection){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
vector<int> UnionOfTwoArrays(vector<int> &nums1,vector<int> &nums2){
  unordered_set<int> s;
  for(int i:nums1){
    s.insert(i);
  }
  for(int i :nums2){
    s.insert(i);
  }
  vector<int> Union;
  for(int i:s){
    Union.push_back(i);
  }
   return Union;

}

vector<int> IntersectionOfTwoArrays(vector<int> &nums1,vector<int> &nums2){
   unordered_set<int> s(nums1.begin(),nums1.end());
   vector<int>  Intersection;
   for(int i:nums2){
    if(s.find(i)!=s.end()){
        Intersection.push_back(i);
        s.erase(i);
    }
   }
   return  Intersection;
}