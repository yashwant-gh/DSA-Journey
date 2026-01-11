class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        char ans;
        for(char c:s){
            mp[c]++;
            if(mp[c]==2){
                ans=c;
                break;
            }
        }
        return ans;
    }
};