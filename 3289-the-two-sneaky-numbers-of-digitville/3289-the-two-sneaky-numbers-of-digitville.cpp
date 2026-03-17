class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
            if(mp[x]==2)ans.push_back(x);
        }
        return ans;
    }
};