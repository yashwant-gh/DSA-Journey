class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)return 1;
        // cout<<s.size();
        unordered_map<int,int>mp;
        int l=0;
        int r=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]){
                ans=max(ans,r-l+1);
                while(mp[s[i]]){
                    mp[s[l]]--;
                    l++;
                }
                mp[s[i]]++;
                r=i;
            }
            else {
                mp[s[i]]++;
                r=i;
            }
            
        }
        return ans;
    }
};