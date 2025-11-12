class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int i=n-1;
        while(s[i]==' '){
            i--;
        }
        int ans=0;
        int j=i;
        while(s[j]!=' '){
            ans++;
            j--;
            if(j<0) break;
        }
        return ans;
    }
};