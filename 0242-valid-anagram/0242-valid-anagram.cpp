class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<int,int>ms;
        unordered_map<int,int>mt;
        for(char c:s)ms[c]++;
        for(char c:t)mt[c]++;
        for(char c:s)if(ms[c]!=mt[c])return false;
        return true;
    }
};