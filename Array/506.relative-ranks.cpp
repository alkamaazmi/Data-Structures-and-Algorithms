/*
 * [506] Relative Ranks
 * You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. 
 * All the scores are guaranteed to be unique.
 * The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. 
 * The placement of each athlete determines their rank:
   * The 1st place athlete's rank is "Gold Medal".
   * The 2nd place athlete's rank is "Silver Medal".
   * The 3rd place athlete's rank is "Bronze Medal".
   * For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x"
 * Return an array answer of size n where answer[i] is the rank of the ith athlete.
 */

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int> mp;
        int n=score.size();
        for(int i=0;i<n;i++){
            mp[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());

        vector<string> v(n,"");
        for(int i=0;i<n;i++){
            if (i+1 == 1) {
                v[mp[score[i]]] = "Gold Medal";
            } else if ( i+1 == 2) {
                v[mp[score[i]]] = "Silver Medal";
            } else if (i+1 == 3) {    
                v[mp[score[i]]] = "Bronze Medal";
            } else {
                v[mp[score[i]]] = to_string(i+1);
            }
        }
        return v;
    }
};
// Time complexity: O(nlog(n))
// Space complexity: O(n)


