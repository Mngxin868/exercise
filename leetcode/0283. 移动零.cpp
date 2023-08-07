class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0){
                sum++;
                for(int j=i;j<n-sum;j++){
                    nums[j] = nums[j+1];
                }
                nums[n-sum] = 0;
            }
        }
    }
};
