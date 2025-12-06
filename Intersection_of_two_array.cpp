class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        int i = 0,j =0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> arr;
        while(i < a.size()&& j <b.size()){
            if(a[i] < b[j]){
                i++;
            }else if(a[i]> b[j]){
                j++;
            }else{
                if(arr.empty() || arr.back() != a[i]){
                    arr.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        return arr;
    }
};
