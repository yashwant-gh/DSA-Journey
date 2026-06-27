class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i = 0;i<s.size();i++){
            if(!isalnum(s[i])){
                s.erase(s.begin()+i);
                i--;
            }
        }
        cout<<s;
        int l = 0, r = s.size()-1;
        while(l<=r){
            s[l]=tolower(s[l]);
            s[r]=tolower(s[r]);
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
};