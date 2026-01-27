class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int c0=0;
        int c1=0;
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)c0++;
            else c1++;
            int diff=c0-c1;
            if(mp.find(diff)!=mp.end()){
                if(i-mp[diff]>ans)ans=i-mp[diff];
            }
            else mp[diff]=i;
        }
        return ans;
    }
};