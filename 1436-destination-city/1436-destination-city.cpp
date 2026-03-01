class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>all;
        for(vector<string>arr:paths){
            all.insert(arr[0]);
            all.insert(arr[1]);
        }
        unordered_map<string,int>mp;
        for(vector<string>arr:paths){
            mp[arr[0]]++;
        }
        string ans="";
        for(string ch:all){
            if(mp[ch]==0){
                ans=ch;
                break;
            }
        }
        return ans;
    }
};