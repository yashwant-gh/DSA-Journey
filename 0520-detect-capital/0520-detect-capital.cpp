class Solution {
public:
    bool detectCapitalUse(string s) {
        string ls = s;
        string us = s;
        transform(ls.begin(), ls.end(), ls.begin(),[](unsigned char c){ return tolower(c); });
        transform(us.begin(), us.end(), us.begin(),[](unsigned char c){ return toupper(c); });
        if(s==ls || s==us)return true;
        ls[0] = toupper((unsigned char)ls[0]);
        if(s==ls)return true;
        return false;
    }
};