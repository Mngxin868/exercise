class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int temp;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            temp = nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==temp){
                    ans++;
                }
            }
        }
        return ans;
    }
};
