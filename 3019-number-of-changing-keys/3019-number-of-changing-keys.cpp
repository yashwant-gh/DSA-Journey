class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i=1;i<s.size();i++){
            if(islower(s[i])){
                if(s[i-1]==s[i] || s[i-1]==s[i]-32)continue;
                count++;
            }
            if(isupper(s[i])){
                if(s[i-1]==s[i] || s[i-1]==s[i]+32)continue;
                count++;
            }
        }
        return count;
    }
};