class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        if(k > arr.size()) return false;
        unordered_map<int,int>mp;
        int diff=0;
        for(int i = 0;i<arr.size();i++){
            if(mp.find(arr[i]) != mp.end()){
                diff = i - mp[arr[i]];
                if (diff <= k) return true;
            }
            mp[arr[i]] = i;
        }
        
        return false;
    }
};
