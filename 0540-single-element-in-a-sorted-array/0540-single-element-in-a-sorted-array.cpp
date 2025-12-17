class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        int ans;
        for(int x:arr){
            if(mp[x]==1){
                ans=x;
                break;
            }
        }
        return ans;
    }
};