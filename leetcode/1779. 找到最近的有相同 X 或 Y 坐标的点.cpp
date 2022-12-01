class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int num,min=INT_MAX;
        bool flag=false;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x||points[i][1]==y){
                flag=true;
                if(min>abs(x-points[i][0])+abs(y-points[i][1])){
                    min=abs(x-points[i][0])+abs(y-points[i][1]);
                    num=i;
                }
            }
        }
        if(!flag) return -1;
        return num;
    }
};
