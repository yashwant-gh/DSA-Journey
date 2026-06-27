class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        unordered_map<string,vector<string>>mp;
        for(string &s:arr){
            string ch = s;
            sort(ch.begin(),ch.end());
            mp[ch].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto& pair:mp){
            ans.push_back(move(pair.second));
        }
        return ans;
    }
};