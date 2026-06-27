class Solution {
public:
    int strStr(string s, string t) {
        if(s.find(t)!=string::npos)return s.find(t);
        return -1;
    }
};