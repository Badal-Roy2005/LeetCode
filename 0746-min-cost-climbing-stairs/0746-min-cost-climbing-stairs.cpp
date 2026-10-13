class Solution {
public:
int solve(vector<int>& cost , int i , int size  , vector<int>& dp){
    if(i < 0) return INT_MAX;
    if(i <= 1) return cost[i];
    if(dp[i] != -1) return dp[i];
    int l = solve(cost , i - 1 , size , dp);
    int r = solve(cost , i - 2 , size , dp);
    if(i != size){
        l += cost[i];
        r += cost[i];
    }
    return dp[i] = min(l , r);

}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1, -1);
        solve(cost , cost.size() , cost.size() , dp);
        return dp[cost.size()];
    }
};