class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        if(timePoints.size()>24*60) return 0;//若时间点超过 24 * 60 个，一定有重复的时间点，返回 0
        vector<int> time;
        int hour,minute,ans,temp;
         //将时间计算成分钟的形式，排序，然后两两计算间隔取最小值
        for(int i=0;i<timePoints.size();i++){
            hour=(timePoints[i][0]*10+timePoints[i][1]);
            minute=(timePoints[i][3]*10+timePoints[i][4]);
            time.push_back(hour*60+minute);
        }
        sort(time.begin(),time.end());
        ans=time[0]-time[time.size()-1]+24*60; // 时间是环，需要考虑首尾时间差
        if(ans==0) return ans;
        for(int i=1;i<time.size();i++){
            temp=time[i]-time[i-1];
            if(temp==0) return temp;
            if(ans>temp) ans=temp;
        }
        return ans;
    }
};
