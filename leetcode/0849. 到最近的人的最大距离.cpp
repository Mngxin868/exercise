class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans = 0, left = 0, right = 0;
        for(int i=0;i<seats.size();i++)    //处理左侧
            if(!seats[i]) left++;
            else break;
        for(int i=seats.size()-1;i>=0;i--)  //处理右侧
            if(!seats[i]) right++;
            else break;
        int temp = 0;
        for(int i=left+1;i<seats.size()-right;i++){  //中间连续0个数
            if(seats[i]){
                ans = max(ans,temp);
                temp = 0;
            }
            else temp++; 
        }
        ans = (ans+1)/2;
        ans = max(left,ans);
        ans = max(right,ans);
        return ans;
    }
};
