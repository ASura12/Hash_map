class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> st;
        st.insert(a.begin(),a.end());
        st.insert(b.begin(),b.end());
        vector<int> result;
        for(int x: st){
            result.push_back(x);
        }
        return result;
    }
};
