class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = 0, n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        if(n==3) return max(max(nums[0], nums[1]),nums[2]);
        vector<int> temp(n);
        temp[0] = nums[0];
        temp[1] = max(nums[0], nums[1]);
        for(int i=2;i<n-1;i++){
            temp[i] = max(temp[i-2]+nums[i],temp[i-1]);
        }
        ans = temp[n-2];
        temp[1] = nums[1];
        temp[2] = max(nums[1],nums[2]);
        for(int i=3;i<n;i++){
            temp[i] = max(temp[i-2]+nums[i],temp[i-1]);
        }
        return max(ans, temp[n-1]);
    }
};
