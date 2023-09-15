class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int an = min(a,min(b,c));
        int cn = max(a,max(b,c));
        int bn = a+b+c-an-cn;
        vector<int> ans(2);
        if(an+1==bn&&bn+1==cn) ans[0] = 0;
        else if(an+1==bn||bn+1==cn) ans[0] = 1;
        else if(an+2==bn||bn+2==cn) ans[0] = 1;
        else ans[0] = 2;
        ans[1] = cn - an -2;
        return ans;
    }
};
