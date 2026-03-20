class Solution {
public:
    string defangIPaddr(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.')ans.append("[.]");
            else ans.push_back(s[i]);
        }
        return ans;
    }
};