class Solution {
public:
vector<int>dp;
Solution(){
    dp.resize(1001,-1);
}

int solve(int n,vector<int>& cost){
    if(n==0 || n==1) return cost[n];
    if(dp[n]!=-1) return dp[n];
    return dp[n]=min(solve(n-1,cost),solve(n-2,cost))+cost[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int n=cost.size()-1;
        return solve(n,cost);
    }
};