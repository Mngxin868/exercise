//56题的变式
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        if(intervals.size()==0){
            ans.push_back(newInterval);
            return ans;
        }
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int j = 0;
        for(int i=1;i<intervals.size();i++){
            if(ans[j][0]>intervals[i][1]||ans[j][1]<intervals[i][0]){
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
