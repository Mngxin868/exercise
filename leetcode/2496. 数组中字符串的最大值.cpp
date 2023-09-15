class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans = 0;
        for(int i=0;i<strs.size();i++){
            int temp = 0;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]>='0'&&strs[i][j]<='9'){
                    temp *= 10;
                    temp += strs[i][j]-'0';
                }
                else{
                    temp = strs[i].size();
                    break;
                }
            }
            ans = max(ans,temp); 
        }
        return ans;
    }
};
