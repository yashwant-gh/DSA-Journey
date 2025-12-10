class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int>mp;
        int ans;
        for(int x:arr){
            mp[x]++;
            if(mp[x]>arr.size()/2) {
                ans=x;
                break;
            }
        }
        return ans;
    }
};