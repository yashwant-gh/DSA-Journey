class Solution {
public:
    bool canConstruct(string rn, string mg) {
        unordered_map<char,int>mp;
        for(char c:mg){
            mp[c]++;
        }
        for(int i=0;i<rn.size();i++){
            if(mp[rn[i]]){ 
                mp[rn[i]]--;
                continue;
            }
            if(!mp[rn[i]]) return false;
        }
        return true;
    }
};