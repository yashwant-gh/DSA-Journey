class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        vector<int>ans;
        sort(arr.begin(),arr.end());
        if(mp[arr[0]]==2) ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]) continue;
            if(mp[arr[i]]==2) ans.push_back(arr[i]);
        }
        return ans;
    }
};