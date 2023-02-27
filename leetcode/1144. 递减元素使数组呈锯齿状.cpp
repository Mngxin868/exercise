class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        vector<int> copy=nums;
        int ans1=0,ans2=0;
        for(int i=0;i<nums.size();i++){
            if(i%2){
                if(i<nums.size()-1&&nums[i]>=nums[i+1]){
                    ans1+=(nums[i]-nums[i+1]+1);
                    nums[i]=nums[i+1]-1;
                }
                if(i>0&&nums[i]>=nums[i-1]){
                    ans1+=(nums[i]-nums[i-1]+1);
                    nums[i]=nums[i-1]-1;
                }
            }
        }
        nums=copy;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                if(i<nums.size()-1&&nums[i]>=nums[i+1]){
                    ans2+=(nums[i]-nums[i+1]+1);
                    nums[i]=nums[i+1]-1;
                }
                if(i>0&&nums[i]>=nums[i-1]){
                    ans2+=(nums[i]-nums[i-1]+1);
                    nums[i]=nums[i-1]-1;
                }
            }
        }
        return min(ans1,ans2);
    }
};
