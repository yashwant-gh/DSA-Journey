class Solution {
public:
    int countConsistentStrings(string s, vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            int tl=0;
            for(char c:words[i]){
                if(s.contains(c))tl++;
            }
            if(tl==words[i].size())ans++;
        }
        return ans;
    }
};