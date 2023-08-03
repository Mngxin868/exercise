//关键在于两者的是否互质
class Solution {
public:
    int gcd(int maxn, int minn){
        if(minn==0) return maxn;
        else return gcd(minn,maxn%minn);
    }

    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        int maxn,minn;
        maxn = max(jug1Capacity,jug2Capacity);
        minn = min(jug1Capacity,jug2Capacity);
        int temp = gcd(maxn,minn);
        if(temp!=1){
            if(targetCapacity%temp==0&&targetCapacity<=maxn+minn) return true;
            else return false;
        }
        else{
            if(targetCapacity<=maxn+minn) return true;
            else return false;
        }
    }
};
