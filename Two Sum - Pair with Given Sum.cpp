class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mp;

        for (int x : arr) {
            mp[x]++;
        }

        for (int num : arr) {
            int complement = target - num;

            // Case 1: complement exists AND it's different from num
            if (complement != num && mp.count(complement)) {
                return true;
            }

            // Case 2: complement == num -> need at least 2 occurrences
            if (complement == num && mp[num] > 1) {
                return true;
            }
        }

        return false;
    }
};
