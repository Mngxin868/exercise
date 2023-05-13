class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans[2002];
        memset(ans,0,sizeof(ans));
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                ans[nums[i]]=1;
            else ans[-nums[i]+1000]=1;
        }
        for(int i=1000;i>0;i--){
            if(ans[i]&&ans[i+1000]) return i;
        }
        return -1;
    }
};
