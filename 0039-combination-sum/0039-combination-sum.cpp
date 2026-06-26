class Solution {
public:
    vector<vector<int>>ans;
    vector<int>cur;
    void dfs(vector<int>&arr, int target, int i){
        if(target==0){
            ans.push_back(cur);
            return;
        }
        if(i == arr.size() || target<0)return;
        cur.push_back(arr[i]);
        dfs(arr,target-arr[i], i);
        cur.pop_back();
        dfs(arr, target, i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(candidates, target, 0);
        return ans;
    }
};