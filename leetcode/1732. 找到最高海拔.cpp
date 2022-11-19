class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0,now=0;
        for(int i=0;i<gain.size();i++){
            now+=gain[i];
            if(now>max) max=now;
        }
        return max;
    }
};
