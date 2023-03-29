//简单模拟，ans用于记录末尾为a,e,i,o,u的个数
class Solution {
public:
    void coutNum(int n, int ans[]){
        if(n==1){
            for(int i=0;i<5;i++)
                ans[i]=1;
            return;
        }
        coutNum(n-1,ans);
        ans[4]+=(ans[0]+ans[1]+ans[2]+ans[3]);  //末尾为u可以由前面所有的加上u得到
        ans[3]+=(ans[0]+ans[1]+ans[2]);
        ans[2]+=(ans[0]+ans[1]);
        ans[1]+=ans[0];
    }

    int countVowelStrings(int n) {
        int ans[5]={0};
        coutNum(n,ans);
        return ans[0]+ans[1]+ans[2]+ans[3]+ans[4];
    }
};
