class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // bruteforce
        int count = 0 ;
        for(int i = 0 ;i < grid.size() ; i++){
            
            int l = 0;
            int r = grid[i].size() - 1;
            while(l <= r)
            {
                int mid = (l + r) / 2;

                if(grid[i][mid] >= 0){
                    l = mid + 1;
                }
                else if(grid[i][mid] < 0){
                    r = mid - 1;
                }
                
            
            }

          

            count += grid[i].size() - l ;
            

        }

        return count;
    }
};