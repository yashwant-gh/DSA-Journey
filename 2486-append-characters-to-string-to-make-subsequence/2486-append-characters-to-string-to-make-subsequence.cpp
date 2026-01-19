class Solution {
public:
    int appendCharacters(string s, string t) {
        int left=0;
        int right=0;
        while(left<s.size() && right<t.size()){
            if(t[right]==s[left]){
                right++;
                left++;
            }
            else left++;
        }
        return t.size()-right;
    }
};