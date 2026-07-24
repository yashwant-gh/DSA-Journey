class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            vector<int>& last = ans.back();
            vector<int>& cur = arr[i];
            if(cur[0]<=last[1]) last[1]=max(last[1],cur[1]);
            else ans.push_back(cur);
        }
        return ans;
    }
};