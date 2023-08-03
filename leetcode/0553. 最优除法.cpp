//要使被除数尽可能大，除数尽可能小，由于都是除法，显然第一个数就是最大的被除数，除数小则让第二个数除以后面所有数之积
class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string ans;
        ans += to_string(nums[0]);
        int n = nums.size();
        if(n==1) return ans;
        if(n==2) ans += "/";
        if(n>2) ans += "/(";
        ans += to_string(nums[1]);
        for(int i=2;i<n;i++){
            ans += "/";
            ans += to_string(nums[i]);
        }
        if(n>2) ans += ")";
        return ans;
    }
};
