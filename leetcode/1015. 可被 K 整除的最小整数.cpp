//优化，偶数才能被2整除，结尾为0或5才能被5整除
//处理过程类似于除法的运算过程，考虑中间的“余数”

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0) return -1;
        int n=1,ans=1,temp=1;
        while(n%k){
            temp=(temp*10)%k;
            n+=temp;
            ans++;
        }
        return ans;
    }
};
