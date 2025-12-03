class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        for(int i=0;i<t.size();i++){
        if(count(s.begin(), s.end(), t[i]) != count(t.begin(), t.end(), t[i]) )ans=t[i];
        }
        return ans;
    }
};