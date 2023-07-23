class Solution {
public:
    int trap(vector<int>& height) {
        int maxp = 0, p = 0;
        int sum0 = 0, sum1 = 0;     //两次高度和
        for(int i=0;i<height.size();i++){
            sum0 += height[i];      //接水前的总高度
            if(maxp<=height[i]){
                maxp = height[i];
                p = i;              //最高点位
            }
        }
        int left = 0, right = 0;
        for(int i=0;i<p;i++){       //最高点左边仅需考虑左侧高度
            if(height[i]<left) height[i] = left;
            left = height[i];
        }
        for(int i=height.size()-1;i>p;i--){    //最高点右边考虑右侧
            if(height[i]<right) height[i] = right;
            right = height[i];
        }
        for(int i=0;i<height.size();i++){
            sum1 += height[i];
        }
        return sum1 - sum0;
    }
};
