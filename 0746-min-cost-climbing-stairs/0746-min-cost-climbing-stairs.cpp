class Solution {
public:
vector<int>dp;
Solution(){
    dp.resize(1001,-1);
}

int solve(int n,vector<int>cost){
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    if(n==cost.size())return dp[n]=min(solve(n-1,cost),solve(n-2,cost));
    else {
    return dp[n]=min(solve(n-1,cost),solve(n-2,cost))+cost[n];
    }
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return solve(n,cost);
    }
};