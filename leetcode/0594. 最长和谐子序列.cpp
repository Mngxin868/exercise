class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxn = 0;
        for(int i=0;i<nums.size();i++){
            int temp1 = 0, temp2 = 0;
            for(int j=i;j<nums.size()&&nums[j]-nums[i]<=1;j++)
                temp1++;
            for(int j=i;j<nums.size()&&nums[j]-nums[i]<1;j++)
                temp2++;
            if(temp1-temp2==0) temp1 = 0;
            maxn = max(maxn, temp1);
        }
        return maxn;
    }
};
