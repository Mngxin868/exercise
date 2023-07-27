//排序再求每列最大值之和
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0,temp;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<grid[0].size();i++){
            temp = 0;
            for(int j=0;j<grid.size();j++){
                temp = max(temp,grid[j][i]);
            }
            ans += temp;
        }
        return ans;
    }
};
