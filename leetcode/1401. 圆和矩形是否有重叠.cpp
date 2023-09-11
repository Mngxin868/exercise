class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x, y;
        if(min(x1,x2)<=xCenter && max(x1,x2)>= xCenter) x = xCenter;
        else if(min(x1,x2)>xCenter) x = min(x1,x2);
        else x = max(x1,x2);
        if(min(y1,y2)<=yCenter && max(y1,y2)>= yCenter) y = yCenter;
        else if(min(y1,y2)>yCenter) y = min(y1,y2);
        else y = max(y1,y2);
        return radius*radius >= (x-xCenter)*(x-xCenter)+(y-yCenter)*(y-yCenter);
    }
};
