//二分法
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int begin = 0, end = nums.size()-1, mid;
        vector<int> ans = {-1, -1};
        if(end==-1) return ans;
        while(begin<end){
            mid = (begin+end)/2;
            if(nums[mid]<target) begin = mid+1;
            else end = mid;
        }
        if(nums[begin]==target)
            ans[0] = begin;
        begin = 0, end = nums.size()-1;
        while(begin<end){
            mid = (begin+end+1)/2;
            if(nums[mid]<=target) begin = mid;
            else end = mid-1;
        }
        if(nums[begin]==target)
            ans[1] = begin;
        return ans;
    }
};
