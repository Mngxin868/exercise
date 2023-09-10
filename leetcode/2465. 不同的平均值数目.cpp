class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int arr[201] = {0}, n = nums.size(), ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            arr[nums[i]+nums[n-i-1]] = 1;
        }
        for(int i=0;i<201;i++){
            if(arr[i]) ans++;
        }
        return ans;
    }
};
