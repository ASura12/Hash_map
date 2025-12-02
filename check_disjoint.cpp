// User function Template for C++
class Solution {
  public:
    bool areDisjoint(vector<int> &a, vector<int> &b) {
        // code here
        unordered_map<int,int> mp;
        for(int x:a){
            mp[x]++;
        }
        for(int y : b){
            if(mp[y] != 0){
                return false;
            }
        }
        return true;
    }
};
