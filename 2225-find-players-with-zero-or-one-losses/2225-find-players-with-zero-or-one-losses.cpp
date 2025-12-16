class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        unordered_map<int,int>mp;
        set<int>st0;
        set<int>st1;
        for(int i=0;i<arr.size();i++){
            mp[arr[i][1]]++;
        }
        for(vector<int>x:arr){
            if(mp[x[0]]==0) st0.insert(x[0]);
            if(mp[x[1]]==1) st1.insert(x[1]);
        }
        vector<int>ans0(st0.begin(),st0.end());
        vector<int>ans1(st1.begin(),st1.end());
        vector<vector<int>>ans;
        ans.push_back(ans0);
        ans.push_back(ans1);
        return ans;
    }
};