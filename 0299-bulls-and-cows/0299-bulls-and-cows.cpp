class Solution {
public:
    string getHint(string sc, string gs) {
        int x=0,y=0;
        unordered_map<char,int>mp;
        
        for(int i=0;i<sc.size();i++){
            if(sc[i]==gs[i]){
                x++;
                sc[i]='X';
                gs[i]='Y';
            }
        }
        for(char c:gs){
            mp[c]++;
        }
        for(int i=0;i<sc.size();i++){
            if(mp[sc[i]]>0) {
                y++;
                mp[sc[i]]--;
            }
        }
        string ans=to_string(x)+'A'+to_string(y)+'B';
        return ans;
    }
};