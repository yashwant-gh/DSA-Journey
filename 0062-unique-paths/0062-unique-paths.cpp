class Solution {
public:
vector<vector<int>>dp;
Solution(){
    dp.resize(101,vector<int>(101,-1));
}
    int solve(int i, int j) {
        if(i<0 || j<0) return 0;
        if(i == 0 || j == 0) return dp[i][j]=1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=solve(i-1,j)+solve(i,j-1);
    }

// because to initilase decrease the value of m and n as we can never reach 3,7 as it is not in the grid 
    int uniquePaths(int i,int j){
        return solve(i-1,j-1);
    }
};