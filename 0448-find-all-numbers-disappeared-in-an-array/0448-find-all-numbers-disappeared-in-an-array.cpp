class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)mp[arr[i]]++;
        int x=1;
        while(x<=arr.size()){
            if(!mp[x])ans.push_back(x);
            x++;
        }
        return ans;
    }
};