/*
 * GeeksForGeeks : Array Subset of another array
 * Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m
 * Task is to check whether a2[] is a subset of a1[] or not
 * Both the arrays can be sorted or unsorted 
 */

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> s(a1,a1+n);
    for(int i=0;i<m;i++){
        if(s.find(a2[i])==s.end()){
            return "No";
        }
    }
    return "Yes";
}

// Time Complexity : O(n)
// Space Complexity : O(n)