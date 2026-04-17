class Solution {
public:
    string largestOddNumber(string s) {
        string ans="";
        while(s.size()){
            if((s.back()-'0')%2!=0){
                ans = s;
                break;
            }
            else s.pop_back();
        }
        return ans;
    }
};