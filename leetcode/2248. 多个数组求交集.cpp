class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int arr[1002] = {0};
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                arr[nums[i][j]]++;
            }
        }
        for(int i=0;i<1002;i++){
            if(arr[i]==nums.size()) ans.push_back(i);
        }
        return ans;
    }
};
