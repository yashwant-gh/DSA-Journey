class Solution {
public:
    vector<int> findLonely(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1 && mp[arr[i]-1]==0 && mp[arr[i]+1]==0) ans.push_back(arr[i]);
        }
        return ans;
    }
};