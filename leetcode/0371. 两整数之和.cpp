class Solution {
public:
    //加法器实现
    int getSum(int a, int b) {
        int sum,carry;
        sum=a^b;    //无进位相加
        carry=(unsigned int)(a&b)<<1;   //无符号进位值
        if(carry!=0) return getSum(sum,carry);
        return sum;
    }
    //数学实现
    int getSum(int a, int b) {
        return log(exp(a)*exp(b));
    }
};
