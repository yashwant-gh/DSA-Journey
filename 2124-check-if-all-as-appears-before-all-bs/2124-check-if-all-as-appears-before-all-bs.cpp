class Solution {
public:
    bool checkString(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            if(c=='a' && mp['b'])return false;
            else mp[c]++;
        }
        return true;
    }
};