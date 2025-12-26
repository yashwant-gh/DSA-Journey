class Solution {
public:
vector<int>dp;
Solution(){
    dp.resize(401,-1);
}
int solve (int n,vector<int>&arr){
    if(n==0) return arr[0];
    if(n==1) return max(arr[0],arr[1]);
    if(dp[n]!=-1) return dp[n];
    return dp[n]=max(solve(n-1,arr),solve(n-2,arr)+arr[n]);
}
    int rob(vector<int>& arr) {
        int n=arr.size();
        return  solve(n-1,arr);
    }
};