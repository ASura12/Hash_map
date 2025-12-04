class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int diff = 0;
        int maxi = 0;
        unordered_map<int,int> firstindex;
        unordered_map<int,int> mp;
        for(int i = 0;i<arr.size();i++){
            if(firstindex.find(arr[i]) == firstindex.end()){
                firstindex[arr[i]] = i;
            }
            if(mp.find(arr[i]) != mp.end()){
                int oldIndex = firstindex[arr[i]];
                diff = i - oldIndex;
                maxi = max(maxi,diff);
            }
            mp[arr[i]] = i;
        }
        return maxi;
    }
};
