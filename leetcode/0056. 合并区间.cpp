//很经典的贪心问题
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        int j = 0;
        for(int i=1;i<intervals.size();i++){
            if(ans[j][1]<intervals[i][0]){
                ans.push_back(intervals[i]);
                j++;
            }
            else{
                ans[j][0] = min(ans[j][0], intervals[i][0]);
                ans[j][1] = max(ans[j][1], intervals[i][1]);
            }
        }
        return ans;
    }
};
