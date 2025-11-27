class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans;
        for(int i=s.size()-1;i>=0;i--){
            if(isalpha(s[i])){
                ans.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        for(int i=0;i<s.size();i++){
            if(!isalpha(s[i])) {
                ans.insert(ans.begin() + i, s[i]);
            }
        }
        return ans;
    }
};