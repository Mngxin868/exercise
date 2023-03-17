class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int j=0;
            for(;j<nums.size();j++){
                if(queries[i]-nums[j]>=0){
                    queries[i]-=nums[j];
                }
                else break;
            }
            ans.push_back(j);
        }
        return ans;
    }
};
