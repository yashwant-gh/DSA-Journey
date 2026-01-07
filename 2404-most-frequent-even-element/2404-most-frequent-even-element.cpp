class Solution {
public:
    int mostFrequentEven(vector<int>& arr) {
        unordered_map<int,int>mp;
        bool mila=false;
        for(int x:arr){
            if(x%2==0){
                mp[x]++;
                mila=true;
            }
        }
        int mx=INT_MIN;
        for (auto const& pair:mp){
            mx=max(mx,pair.second);
        }
        int smk=INT_MAX;
        for(auto const& pair:mp){
            if(pair.second==mx){
                smk=min(smk,pair.first);
            }
        }
        if(!mila)return -1;
        return smk;
    }
};