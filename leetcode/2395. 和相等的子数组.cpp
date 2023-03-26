//当然也可以用unordered_set
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i+1<nums.size();i++){
            for(int j=0;j<temp.size();j++){
                if(temp[j]==nums[i]+nums[i+1])
                    return true;
            }
            temp.push_back(nums[i]+nums[i+1]);
        }
        return false;
    }
};
