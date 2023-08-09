//关键点就是当前值减去之前最小值就是当前的最佳时机
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int maxn = 0;
        for(int i=1;i<prices.size();i++){
            maxn = max(maxn, prices[i] - minn);
            minn = min(minn, prices[i]);
        }
        return maxn;
    }
};
