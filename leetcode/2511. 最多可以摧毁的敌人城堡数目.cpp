class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0, temp = 0;
        vector<int> arr, num;
        for(int i=0;i<forts.size();i++){
            if(forts[i]==0) temp++;
            else{
                arr.push_back(forts[i]);
                num.push_back(temp);
                temp = 0;
            }

        }
        for(int i=1;i<num.size();i++){
            if(arr[i-1]*arr[i]==-1)
                ans = max(ans,num[i]);
        }
        return ans;
    }
};
