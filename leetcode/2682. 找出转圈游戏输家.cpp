class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> ans, temp(n);
        int i = 1, p = 0;
        temp[0] = 1;
        while(1){
            p = (p+i*k)%n;
            if(temp[p]==0){
                temp[p] = 1;
                i++;
            }
            else break;
        }
        for(int i=0;i<n;i++){
            if(temp[i]==0) ans.push_back(i+1);
        }
        return ans;
    }
};
