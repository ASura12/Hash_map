class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int> mp;
        int count = 0;
        for(int x : arr){
            int complement = target - x;
            if(mp.count(complement)){
                count+=mp[complement];
            }
            mp[x]++;
        }
        return count;
    }
};
