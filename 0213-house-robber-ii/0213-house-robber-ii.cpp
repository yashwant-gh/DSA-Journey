class Solution {
public:

int solve1 (int n,vector<int>&arr,vector<int>&dp){
    if(n==0) return arr[0];
    if(n==1) return max(arr[0],arr[1]);
    if(dp[n]!=-1) return dp[n];
    return dp[n]=max(solve1(n-1,arr,dp),solve1(n-2,arr,dp)+arr[n]);
}
    int rob(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        int n=arr.size();
        vector<int>arr1=arr;
        arr1.pop_back();
        vector<int>dp1(401,-1);
        int ans1=solve1(n-2,arr1,dp1);
        arr.erase(arr.begin());
        vector<int>dp2(401,-1);
        int ans2=solve1(n-2,arr,dp2);
        return max(ans1,ans2);
    }
};