class Solution {
public:
bool ispal(string s){
    int right=s.length()-1;
    int left=0;
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}
    string firstPalindrome(vector<string>& w) {
        for(int i=0;i<w.size();i++){
            if(ispal(w[i])) return w[i];
        }
        return "";
    }
};