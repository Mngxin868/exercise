class Solution {
public:
  //遍历记出现了的数对应的下标的值为负，若已经为负则代表出现过
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp=abs(nums[i]);
            if(nums[temp-1]>0) nums[temp-1]*=-1;
            else ans.push_back(temp);
        }
        return ans;
    }
};
