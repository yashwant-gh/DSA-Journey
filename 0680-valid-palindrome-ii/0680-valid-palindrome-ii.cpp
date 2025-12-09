class Solution {
public:
bool ispal(string s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}
    bool validPalindrome(string s) {
        string org=s;
        int left=0;
        int right=s.size()-1;
        while(left<=right){
            if(left==right) return true;
            if(s[left]!=s[right]){
                s.erase(left,1);
                if(ispal(s)) return true;
                org.erase(right,1);
                if(ispal(org)) return true;
                return false;

            }
            left++;
            right--;
        }
        return ispal(s);
    }
};