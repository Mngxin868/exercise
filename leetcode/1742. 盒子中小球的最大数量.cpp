class Solution {
public:
    int change(int num){
        int ans=0;
        while(num>0){
            ans+=num%10;
            num=num/10;
        }
        return ans;
    }

    int countBalls(int lowLimit, int highLimit) {
        int box[50]={0},max=0,temp;
        for(int i=lowLimit;i<=highLimit;i++){
            temp=change(i);
            box[temp]++;
            if(box[temp]>max) max=box[temp];
        }
        return max;
    }
};
