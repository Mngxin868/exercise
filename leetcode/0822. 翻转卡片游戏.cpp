/*问题的关键在于正面和背面不相同的最小数，正面和背面相同，显然背面那个数一定不可能和正面都相同，
而不相同的，一定会可以翻转到背面和所有正面均不相同的那种情况
  */
class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        int ans[2001]={0};
        for(int i=0;i<fronts.size();i++){
            if(fronts[i]==backs[i]) ans[fronts[i]] = 1;
            if(fronts[i]!=backs[i]){
                if(!ans[fronts[i]]) ans[fronts[i]] = 2;
                if(!ans[backs[i]]) ans[backs[i]] = 2;
            }
        }
        for(int i=1;i<2001;i++){
            if(ans[i]==2) return i;
        }
        return 0;
    }
};
