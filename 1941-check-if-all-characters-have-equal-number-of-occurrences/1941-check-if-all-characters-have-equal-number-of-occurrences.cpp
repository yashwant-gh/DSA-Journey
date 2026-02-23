class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        int ch=mp[s[0]];
        for(char c:s)if(mp[c]!=ch)return false;
        return true;
    }
};