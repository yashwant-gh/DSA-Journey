class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return true;
        int sz=0;
        int j=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[j]){
                sz++;
                j++;
                if(sz==s.size()) return true;
            }
        }
        return false;
    }
};