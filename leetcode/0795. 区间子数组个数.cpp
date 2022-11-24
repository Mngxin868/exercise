class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans=0,temp=0,j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>right) j=i;
            if(nums[i]>=left) temp=i-j;
            ans+=temp;
        }
        return ans;
    }
};
