class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int temp=maxSum-n;
        int ans=1,left=index,right=index;
        while(temp>=0){
            temp-=(right-left+1);
            ans++;
            if(left>0) left--;
            if(right<n-1) right++;
            if(left==0&&right==n-1&&n<temp)
                return ans+temp/n;
        }
        return ans-1;
    }
};
