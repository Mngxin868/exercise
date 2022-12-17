class Solution {
public:
    bool Choose(vector<int>& groups_i,vector<int>& nums,int left,int right){
        for(int i=left;i<right;i++){
            if(groups_i[i-left]!=nums[i]) return false;
        }
        return true;
    }

    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        bool flag=false;
        int n=groups.size();
        int i=0,j=0;
        while(i<n){
            int m=groups[i].size();
            if(j+m>nums.size()) break;
            if(Choose(groups[i],nums,j,j+m)){
                i++;j=j+m;
            }else{
                j++;
            }
        }
        if(i==n){
            flag=true;
        }
        return flag;
    }
};
