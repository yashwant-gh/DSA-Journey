class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int need = target- arr[i];
            if(mp.find(need)!=mp.end()){
                ans.push_back(i+1);
                ans.push_back(mp[need]+1);
                return ans;
            }
        }
        return ans;
    }
};