class Solution {
public:
    string sorted(string s){
        sort(s.begin(),s.end());
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        unordered_map<string,vector<string>>mp;
        for(string &s:arr){
            string ch = sorted(s);
            mp[ch].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto& pair:mp){
            ans.push_back(move(pair.second));
        }
        return ans;
    }
};