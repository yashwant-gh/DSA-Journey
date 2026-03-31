class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        items1.insert(items1.end(), items2.begin(), items2.end());
        unordered_map<int,int>mp;
        for(int i=0;i<items1.size();i++){
            mp[items1[i][0]]+=items1[i][1];
        }
        vector<vector<int>>ans;
        for (const auto& [key, value] : mp) {
            ans.push_back({key,(value)});
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};