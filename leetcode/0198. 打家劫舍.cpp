//动态规划
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int res = 0, temp = 0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(i==0) ans[i] = nums[0];
            else if(i==1) ans[i] = max(nums[0],nums[1]);
            else{
                temp = max(ans[i-2],temp);
                ans[i] = nums[i] + temp;
            }
            res = max(ans[i],res);
        }
        return res;
    }
};
