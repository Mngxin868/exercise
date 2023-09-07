//根据时间二分
class Solution {
public:
    bool check(long long mid, vector<int>& ranks, int cars){
        long long temp = 0;
        for(int i=0;i<ranks.size();i++){
            temp += sqrt(mid/ranks[i]);
        }
        if(temp>=cars) return true;
        else return false;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long right = (long long)ranks[0]*cars*cars;
        long long left = 0;
        while(left<right){
            long long mid = (left+right)/2;
            if(check(mid,ranks,cars)) right = mid;
            else left = mid+1;
        }
        return left;
    }
};
