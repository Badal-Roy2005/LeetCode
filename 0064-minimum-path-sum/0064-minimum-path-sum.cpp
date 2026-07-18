class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n , vector<int> (m , -1));
        for(int i = 0 ;i < n;i++){
            for(int j = 0 ; j < m ;j++){
                if(i == 0 && j == 0) dp[i][j] = grid[i][j];
                else {
                    int u = INT_MAX;
                    int l = INT_MAX;
                    if(i-1 >= 0) u = grid[i][j] + dp[i-1][j];
                    if(j-1 >= 0) l = grid[i][j] + dp[i][j-1];
                    dp[i][j] = min(u , l);
                    
                }
            }
        }

        return dp[n-1][m-1];
    }
};