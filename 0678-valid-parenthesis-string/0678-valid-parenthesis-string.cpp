class Solution {
public:
    bool checkValidString(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            if(c==')'){
                if(mp['('])mp['(']--;
                else if(mp['*'])mp['*']--;
                else return false;
            }
            else mp[c]++;
        }
        if(mp['('] && mp['(']>mp['*']){
            return false;
        }
        return true;
    }
};