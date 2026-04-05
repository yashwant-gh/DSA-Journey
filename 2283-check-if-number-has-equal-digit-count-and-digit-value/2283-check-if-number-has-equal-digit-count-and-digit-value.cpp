class Solution {
public:
    bool digitCount(string s) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        for(int i=0;i<s.size();i++){
            char ic = i + '0';
            int n = s[i]-'0';
            cout<<mp[ic]<<" "<<n;
            if(mp[ic]!=n)return false;
        }
        return true;
    }
};