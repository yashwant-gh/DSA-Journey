class Solution {
public:
    string customSortString(string s1, string s2) {
        unordered_map<char,int>mp;
        for(char c:s2){
            mp[c]++;
        }
        string ans;
        for(char c:s1){
            while(mp[c]>0){
                ans.push_back(c);
                mp[c]--;
            }
        }
        for(char c:s2){
            if(mp[c]>0){
                ans.push_back(c);
                mp[c]--;
            }
        }
        cout<<ans;
        return ans;
    }
};