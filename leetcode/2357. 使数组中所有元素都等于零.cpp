class Solution {
public:
    //本质是找不同正整数的个数
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        if(nums[0]!=0) ans++;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]) ans++;
        }
        return ans;
    }
};
