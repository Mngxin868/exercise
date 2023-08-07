//动态规划
class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i =0;i<n;i++){
            ans[i] = 0;
        }
        for(int i=0;i<n;i++){
            if(i!=0&&ans[i]==0) continue;
            for(int j=i+1;j<n;j++){
                if(abs(nums[j]-nums[i])<=target)
                    ans[j] = max(ans[j],ans[i]+1);
            }
        }
        if(ans[n-1]==0) return -1;
        else return ans[n-1];
    }
};
