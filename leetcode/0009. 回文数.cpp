class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else{
            long long temp = x, ans = 0;
            while(temp>0){
                ans *= 10;
                ans += temp%10;
                temp /= 10;
            }
            if(ans==x) return true;
            else return false;
        }
    }
};
