//签到题，可以记录字母是否存在优化判定效率
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for(int i=0;i<stones.size();i++){
            for(int j=0;j<jewels.size();j++){
                if(stones[i]==jewels[j]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
