//注意不是0,0开始的不算有效的
class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int x = 0, y = 0;
        if(grid[0][0]!=0) return false;
        for(int i=0;i<n*n-1;i++){
            if(x+1<n&&y+2<n&&grid[x+1][y+2]==i+1){
                x = x+1;
                y = y+2;
                continue;
            }
            if(x+1<n&&y-2>=0&&grid[x+1][y-2]==i+1){
                x = x+1;
                y = y-2;
                continue;
            }
            if(x+2<n&&y+1<n&&grid[x+2][y+1]==i+1){
                x = x+2;
                y = y+1;
                continue;
            }
            if(x+2<n&&y-1>=0&&grid[x+2][y-1]==i+1){
                x = x+2;
                y = y-1;
                continue;
            }
            if(x-1>=0&&y+2<n&&grid[x-1][y+2]==i+1){
                x = x-1;
                y = y+2;
                continue;
            }
            if(x-1>=0&&y-2>=0&&grid[x-1][y-2]==i+1){
                x = x-1;
                y = y-2;
                continue;
            }
            if(x-2>=0&&y+1<n&&grid[x-2][y+1]==i+1){
                x = x-2;
                y = y+1;
                continue;
            }
            if(x-2>=0&&y-1>=0&&grid[x-2][y-1]==i+1){
                x = x-2;
                y = y-1;
                continue;
            }
            return false;
        }
        return true;
    }
};
