class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        int up = 0, down = 0;
        bool flag = true;
        for(int i=0;i<nums.size();i++){
            if(flag){
                if(nums[i]>=up) up = nums[i];
                else{
                    flag = false;
                    ans += (up-down);
                    up = 0;
                    down = nums[i];
                }
            }
            else{
                if(nums[i]<=down) down = nums[i];
                else{
                    flag = true;
                    up = nums[i];
                }
            }
            if(i==nums.size()-1&&up!=0) ans+=(up-down);
        }
        return ans;
    }
};
