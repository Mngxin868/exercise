//枚举八个方向
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> ans;
        int arr[10][10] = {0};
        for(int i=0;i<queens.size();i++){
            arr[queens[i][0]][queens[i][1]] = 1;
        }
        for(int i=king[0]-1;i>=0;i--)    //左
            if(arr[i][king[1]]){
                ans.push_back({i,king[1]});
                break;
            }
        for(int i=king[0]+1;i<8;i++)      //右
            if(arr[i][king[1]]){
                ans.push_back({i,king[1]});
                break;
            }
        for(int i=king[1]-1;i>=0;i--)      //上
            if(arr[king[0]][i]){
                ans.push_back({king[0],i});
                break;
            }
        for(int i=king[1]+1;i<8;i++)      //下
            if(arr[king[0]][i]){
                ans.push_back({king[0],i});
                break;
            }
        for(int i=king[0]-1, j=king[1]-1;i>=0&&j>=0;i--,j--)      //左上
            if(arr[i][j]){
                ans.push_back({i,j});
                break;
            }
        for(int i=king[0]-1, j=king[1]+1;i>=0&&j<8;i--,j++)      //左下
            if(arr[i][j]){
                ans.push_back({i,j});
                break;
            }
        for(int i=king[0]+1, j=king[1]-1;i<8&&j>=0;i++,j--)      //右上
            if(arr[i][j]){
                ans.push_back({i,j});
                break;
            }
        for(int i=king[0]+1, j=king[1]+1;i<8&&j<8;i++,j++)      //右下
            if(arr[i][j]){
                ans.push_back({i,j});
                break;
            }
        return ans;
    }
};
