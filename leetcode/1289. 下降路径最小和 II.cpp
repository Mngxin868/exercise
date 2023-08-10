//动态规划
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int minn = 99*200;
                for(int k=0;k<n;k++){
                    if(k!=j) minn = min(minn,grid[i-1][k]);
                }
                grid[i][j] += minn;
            }
        }
        int ans = grid[n-1][0];
        for(int i=1;i<n;i++){
            ans = min(ans, grid[n-1][i]);
        }
        return ans;
    }
};
