//怪物到达时间大于当前时间即可消灭
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int ans = 0;
        vector<int> arr;
        for(int i=0;i<dist.size();i++){
            if(dist[i]%speed[i]==0)
                arr.push_back(dist[i]/speed[i]);
            else arr.push_back(dist[i]/speed[i]+1);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]<i+1) break;
            ans++;
        }
        return ans;
    }
};
