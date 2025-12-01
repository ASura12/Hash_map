int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int> mp;
    int maxcount = 0;
    int maxans = 0;
    //Counting the frequency of the number
    for(int i = 0;i <arr.size();i++){
        mp[arr[i]]++;
        maxcount = max(maxcount,mp[arr[i]]);
    }
    //Comparing the maxcount to check which values is greater ans return its value;
    for(int i = 0;i<arr.size();i++){
        if(maxcount == mp[arr[i]]){
            maxans = arr[i];
            break;
        }
    }
    return maxans;
}
