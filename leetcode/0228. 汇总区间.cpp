class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<int> ans;
        vector<string> str;
        if(nums.size()==0) return str;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]+1){
                ans.push_back(nums[i-1]);
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[nums.size()-1]);
        for(int i=0;i<ans.size();i+=2){
            if(ans[i]==ans[i+1])
                str.push_back(to_string(ans[i]));
            else
                str.push_back(to_string(ans[i])+"->"+to_string(ans[i+1]));
        }
        return str;
    }
};
