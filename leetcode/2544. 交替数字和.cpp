class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0, flag = 0, sign = 1;
        while(n>0){
            flag += 1;
            ans += sign*(n%10);
            n /= 10;
            sign *= -1;
        }
        if(flag%2) return ans;
        else return -ans;
    }
};
