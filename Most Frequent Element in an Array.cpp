class Solution {
public:
    int mostFreqEle(vector<int>& arr) {
        unordered_map<int,int> mp;

        for (int x : arr) {
            mp[x]++;
        }

        int maxKey = -1;
        int maxVal = -1;

        for (auto &p : mp) {
            int key = p.first;
            int val = p.second;

            if (val > maxVal || (val == maxVal && key > maxKey)) {
                maxVal = val;
                maxKey = key;
            }
        }
        return maxKey;
    }
};
