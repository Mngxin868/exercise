//贪心
class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum%2==1) return ans;
        if(finalSum==2) return {2};
        long long temp = 2;
        while(finalSum>0){
            if(finalSum<=temp-2){
                ans[ans.size()-1] += finalSum;
                break;
            }
            finalSum -= temp;
            ans.push_back(temp);
            temp += 2;
        }
        return ans;
    }
};
