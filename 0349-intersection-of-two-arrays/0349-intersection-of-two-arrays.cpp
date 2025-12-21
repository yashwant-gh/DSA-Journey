class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:arr1)mp[x]++;
        for(int i=0;i<arr2.size();i++){
            if(mp[arr2[i]]) {
                ans.push_back(arr2[i]);
                mp[arr2[i]]=0;
        }
    }
    return ans;
    }
};