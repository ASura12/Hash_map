class Solution {
public:
    int countPairs(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int x : arr) mp[x]++;

        if (k == 0) {
            int res = 0;
            for (auto &p : mp) {
                int f = p.second;
                res += f * (f - 1) / 2;
            }
            return res;
        }

        int count = 0;
        for (auto &p : mp) {
            int x = p.first;
            if (mp.count(x + k)) {
                count += p.second * mp[x + k];
            }
        }
        return count;
    }
};
