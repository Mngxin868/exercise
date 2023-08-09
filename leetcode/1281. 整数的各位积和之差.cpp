class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, mult = 1;
        while(n>0){
            sum += n%10;
            mult *= n%10;
            n /= 10;
        }
        return mult - sum;
    }
};
