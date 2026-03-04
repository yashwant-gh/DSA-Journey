class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int x:arr)mp[x]++;
        for(int x:arr){
            if(mp[x]%2!=0){
                ans.push_back(x);
                mp[x]=0;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};