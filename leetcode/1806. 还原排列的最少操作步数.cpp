class Solution {
public:
    int reinitializePermutation(int n) {
        int temp=1,ans=0;
        while(1){
            if(temp%2==1)
                temp=n/2+(temp-1)/2;
            else temp=temp/2;
            ans++;
            if(temp==1) return ans;
        }
        return ans;
    }
};
