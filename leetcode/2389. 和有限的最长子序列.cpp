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

//前缀和+二分查找可以显著提高效率：
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> sum;
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int left=0,right=nums.size()-1,mid;
            while(left<=right){
                mid=(left+right)/2;
                if(queries[i]==nums[mid]) break;
                if(queries[i]>nums[mid]) left=mid+1;
                else right=mid-1;
            }
            if(queries[i]<nums[mid]){   //最后讨论一下，mid表示是要插入的位置
                queries[i]=mid;
            }
            else queries[i]=mid+1;
        }
        return queries;
    }
};
