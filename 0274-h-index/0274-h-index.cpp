class Solution {
public:
int ch(unordered_map<int,int>mp,int x){
    int count=0;
    for(pair<int,int>pr:mp){
        if(pr.first>=x)count+=pr.second;
    }
    return count;
}
    int hIndex(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x:arr) mp[x]++;
        int n=arr.size();
        int ans=0;
        while(n){
            if(ch(mp,n)>=n){
                ans=n;
                break;
            }
            n--;
        }
        cout<<ans;
        return ans;
    }
};