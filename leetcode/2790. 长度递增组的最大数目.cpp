//贪心法
class Solution {
public:
    int maxIncreasingGroups(vector<int>& usageLimits) {
        sort(usageLimits.begin(),usageLimits.end());
        int ans = 0;
        long temp = 0;
        for(int i=0;i<usageLimits.size();i++){
            temp += usageLimits[i];
            if(temp>ans){
                ans++;
                temp -= ans;
            }
        }
        return ans;
    }
};
