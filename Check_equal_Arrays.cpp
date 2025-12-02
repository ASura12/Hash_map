class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size() < b.size()) return false;
        unordered_map<int,int> mp;
        for(int x: a){
            mp[x]++;
        }
        for(int y: b){
            if(mp[y] == 0){
                return false;
            }else{
                mp[y]--;
            }
        }
        return true;
    }
};
