//摩尔投票
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int flag = 0, ans = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans) flag++;
            else flag--;
            if(flag==0){
                ans = nums[i];
                flag = 1;
            }
        }
        return ans;
    }
};
