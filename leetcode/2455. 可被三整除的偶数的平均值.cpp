class Solution {
public:
    int averageValue(vector<int>& nums) {
        int num = 0, sum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                num++;
                sum += nums[i];
            }
        }
        if(num==0) return 0;
        return sum/num;
    }
};
