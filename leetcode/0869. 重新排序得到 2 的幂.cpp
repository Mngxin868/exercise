class Solution {
public:
    bool fun(int num[],int ans[]){        //两个数组是否相等
        for(int i=0;i<10;i++){
            if(num[i]!=ans[i]) return false;
        }
        return true;
    }

    bool reorderedPowerOf2(int n) {
        if(n==1) return true;
        int num[10]={0};
        int k=0;            //得到位数
        while(n>0){
            num[n%10]++;
            n=n/10;
            k++;
        }
        for(int i=2;i<pow(10,9);i=i*2){
            if(i<pow(10,k-1)) continue;     //小于对应位数的显然不可能
            if(i>pow(10,k)) return false;   //大于对应位数的没必要再计算
            int temp=i;
            int ans[10]={0};
            while(temp>0){
                ans[temp%10]++;
                temp=temp/10;
            }
            if(fun(num,ans)) return true;
        }
        return false;
    }
};
